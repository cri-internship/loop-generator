#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <stdio.h>
#include "test.h"
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb))
{
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = 65;
}}}
int i,j,k,l;
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = 2;
}}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("A");
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("A");
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i][j][k]);
}}}
POLYBENCH_DUMP_END("A");
POLYBENCH_DUMP_FINISH;
int i,j,k,l;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("B");
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("B");
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
int main(int argc, char** argv)
{
int xa = xA;
int ya = yA;
int za = zA;
int xb = xB;
int yb = yB;
int zb = zB;
POLYBENCH_{'xA': '32', 'yA': '32', 'zA': '32'}D_ARRAY_DECL(A, DATA_TYPE,A,xA,yA,zA,xa,ya,za);
init_array(xa,ya,za,xb,yb,zb,POLYBENCH_ARRAY(A),POLYBENCH_ARRAY(B));
kernel_test(xa,ya,za,xb,yb,zb,POLYBENCH_ARRAY(A),POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xA,yA,zA,POLYBENCH_ARRAY(A)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
void kernel_test(int xa,int ya,int za,int xb,int yb,int zb,DATA_TYPE POLYBENCH_{'xA': '32', 'yA': '32', 'zA': '32'}D(A,A,xA,yA,zA,xa,ya,za)){
polybench_start_instruments;
#pragma scop
	for (int i = 0; i < 32; i++)
	    for (int j = 0; j < 32; j++)
	        for (int k = 0; k < 32; k++)
	        {
	            A[k][j][i]=A[k][j][i];
	            B[k][j][i]=B[k][j][i];
	        }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;}
