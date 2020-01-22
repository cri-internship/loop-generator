#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(240, 830, 990, "ones");
	double ***A = create_three_dim_double(460, 530, 220, "ones");
	double ***D = create_three_dim_double(240, 930, 120, "ones");
	double *E = create_one_dim_double(270, "ones");
	double *B = create_one_dim_double(480, "ones");

	for (int c = 5; c < 118; c++)
	  for (int b = 4; b < 830; b++)
	    for (int a = 5; a < 239; a++)
	    {
	      
	      D[a][b][c]=D[a-1][b-4][c-5]*B[a]+A[a][b][c]/0.537;
	      
	      E[a]=0.961;
	      float  var_a=E[a]/0.535;
	      
	      D[a][b][c]=D[a+1][b+4][c+2]*0.149;
	      
	      double var_b=E[a]-0.707;
	      double var_c=E[a-1]-0.892;
	      
	      double var_d=E[a]*0.573;
	      double var_e=E[a-5]+0.368;
	      
	      E[a]=C[a][b][c]+D[a][b][c]*B[a]/D[a][b][c]-A[a][b][c];
	      A[a][b][c]=C[a][b-1][c-4]+E[a]*A[a][b][c]-D[a][b][c]/B[a];
	    }

    return 0;
}