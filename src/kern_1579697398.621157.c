#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(410, "zeros");
	double ***D = create_three_dim_double(700, 150, 170, "zeros");
	double **B = create_two_dim_double(880, 690, "zeros");
	double ***C = create_three_dim_double(770, 780, 40, "zeros");

	for (int b = 2; b < 685; b++)
	  for (int a = 5; a < 410; a++)
	  {
	    
	     A[a]=A[a-1]-C[a][b][a]*D[a][b][a]+B[a][b];
	    
	     A[a]=A[a-3]+0.891;
	    
	     double var_a=C[a][b][a]*0.321;
	     double var_b=C[a+4][b+3][a+1]+0.812;
	    
	     C[a][b][a]=C[a][b][a]+A[a];
	     D[a][b][a]=C[a-5][b-2][a-2]/B[a][b]+0.422;
	    
	     double var_c=B[a][b]*0.179;
	     double var_d=B[a+1][b+5]*0.408;
	  }

    return 0;
}