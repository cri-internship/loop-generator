#!/bin/bash


for i in *[0-9].c; do
    [ -f "$i" ] || break


filename=$(basename -- "$i")
extension="${filename##*.}"
filename="${filename%.*}"
mkdir ${filename}
cp ${filename}.c ${filename}
cp ${filename}_parsing.c ${filename}
cp ${filename}.c ${filename}
cp init_dyn_array.c ${filename}
cp init_dyn_array.h ${filename}
cp pips_runtime.c ${filename}
cp pips_runtime.h ${filename}
cp mytiming.py ${filename}
cd ${filename}

touch cleanup.sh
touch results.txt
touch howtobase.sh
touch howtosearch.sh
touch howtorun.sh
touch Makefile
touch search.locus
touch search_powers.locus

chmod +rwx cleanup.sh
chmod +rwx howtobase.sh
chmod +rwx howtosearch.sh
chmod +rwx howtorun.sh

cat > cleanup.sh <<EOF

#!/bin/bash
export SRC=${filename}
../../common/cleanup.sh
EOF

cat > howtobase.sh <<EOF

#!/bin/bash

die () {
	echo >&2 "\$@"
	exit 1
}
ntests=100
if [ "\$#" -eq 1 ];then ntests=\${1}; fi #|| die "1 filename required -- input to be encrypted and the output will be input + .enc , \$# provided

locusf=search.locus
srcfile=${filename}.c
preproc=" "
EOF




cat > howtosearch.sh <<EOF
#!/bin/bash

preproc=""
srcfile=${filename}.c
locusf=search.locus

. ./howtobase.sh

../../common/bosshowtorun.sh  -s -n \${ntests} -t \${locusf} -f \${srcfile} #-d
EOF


cat > Makefile <<EOF


CC=gcc
SRC=${filename}.ice
ORIG=${filename}

OPTFLAGS := -O3 -march=native -mtune=native -ftree-vectorize -Wall -fopenmp -I.

INC +=
LDFLAGS += -lm


all:
	\$(CC) \$(SRC).c init_dyn_array.c pips_runtime.c \$(OPTFLAGS) \$(OMPFLAGS) \$(LDFLAGS) -o \$(SRC)

clean:
	rm -f *.o
	rm -f \$(SRC)
	rm -f \$(ORIG)



EOF



cat > search.locus <<EOF

Search {
        prebuildcmd = "";
        measureorig = False;
        buildcmd = "make";
        runcmd = "./${filename}.ice";
}



CodeReg tile{

	{
	x = enum(8,32,512);
	tmat = [[x, 0, 0],[0, x, 0], [0, 0, x]];
	tdir=enum("TP","TI");
	ldir=enum("LP","LS","LI");
	Pips.ParallelGenericTiling(loop="0", factor=tmat, tiledir=tdir, localdir=ldir); } OR


	{
	x = enum(8,32,512);
	tmat = [[x, 0, 0],[-x, x, 0], [-x, 0, x]];
	tdir=enum("TP","TI");
	ldir=enum("LP","LS","LI");
	Pips.ParallelGenericTiling(loop="0", factor=tmat, tiledir=tdir, localdir=ldir);} OR


	{
	x = enum(8,32,512);
	tmat = [[x, -x, 0],[0, x, 0], [0, -x, x]];
	tdir=enum("TP","TI");
	ldir=enum("LP","LS","LI");
	Pips.ParallelGenericTiling(loop="0", factor=tmat, tiledir=tdir, localdir=ldir); } OR


	{
	x = enum(8,32,512);
	tmat = [[x, 0, -x],[0, x, -x], [0, 0, x]];
	tdir=enum("TP","TI");
	ldir=enum("LP","LS","LI");
	Pips.ParallelGenericTiling(loop="0", factor=tmat, tiledir=tdir, localdir=ldir); }


	Pragma.Ivdep(loop="0.0.0.0.0.0");
	Pragma.Vector(loop="0.0.0.0.0.0");
	OpenMP.OMPFor(loop="0", clauses="private(i_t, k_t,j_t,i_l,k_l,j_l,i,k,j)");


}        
EOF


cat > search_powers.locus <<EOF
Search {
        prebuildcmd = "";
        measureorig = False;
        buildcmd = "make";
        runcmd = "./${filename}.ice";
}

CodeReg tile{



	A = poweroftwo(2...512);

	tmat = [[A,0,0],[0,A,0],[0,0,A]];

	Pips.ParallelGenericTiling(loop="0", factor=tmat);
	Pragma.Ivdep(loop="0.0.0.0.0.0");
	Pragma.Vector(loop="0.0.0.0.0.0");
	OpenMP.OMPFor(loop="0", clauses="private(i_t, k_t,j_t,i_l,k_l,j_l,i,k,j)");

}        

EOF




cat > howtorun.sh <<EOF

#!/bin/bash

preproc=""
srcfile=${filename}.c
locusf=search.locus
ntests=100

. ./howtobase.sh

../../common/bosshowtorun.sh -n \${ntests} -t \${locusf} -f \${srcfile} #-d  #-p \${preproc}

EOF

cd ..
done



