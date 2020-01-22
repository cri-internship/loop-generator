#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(800, 760, "zeros");
	double *C = create_one_dim_double(200, "zeros");
	double ***A = create_three_dim_double(370, 440, 40, "zeros");

	for (int c = 2; c < 40; c++)
	  for (int b = 3; b < 436; b++)
	    for (int a = 4; a < 200; a++)
	    {
	      
	      C[a]=C[a-3]*B[a][b];
	      
	      C[a]=C[a-4]*0.464;
	      
	      A[a][b][c]=0.716;
	      A[a-4][b-3][c-2]=0.913;
	      
	      double var_a=A[a][b][c]/0.539;
	      double var_b=A[a+1][b+4][c]-0.523;
	      
	      double var_c=B[a][b]/0.958;
	      double var_d=B[a+3][b+1]/0.005;
	    }

    return 0;
}