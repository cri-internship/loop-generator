#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(820, "ones");
	double ***D = create_three_dim_double(160, 210, 990, "ones");
	double **B = create_two_dim_double(710, 260, "ones");
	double *A = create_one_dim_double(930, "ones");
	double **C = create_two_dim_double(650, 730, "ones");

	for (int c = 3; c < 990; c++)
	  for (int b = 2; b < 207; b++)
	    for (int a = 1; a < 156; a++)
	    {
	      
	      D[a][b][c]=D[a][b-2][c-3]-0.066;
	      
	      B[a][b]=B[a-1][b-1]-C[a][b]*A[a];
	      
	      double var_a=D[a][b][c]-0.896;
	      double var_b=D[a+4][b+3][c]/0.527;
	      
	      double var_c=B[a][b]/0.086;
	      double var_d=B[a][b]/0.038;
	      
	      double var_e=C[a][b]/0.11;
	      double var_f=C[a+1][b+1]/0.236;
	    }

    return 0;
}