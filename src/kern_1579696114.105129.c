#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(470, 490, 50, "ones");
	double *C = create_one_dim_double(220, "ones");
	double **B = create_two_dim_double(590, 150, "ones");

	for (int c = 0; c < 47; c++)
	  for (int b = 0; b < 486; b++)
	    for (int a = 4; a < 217; a++)
	    {
	      
	      C[a]=C[a-1]-0.465*B[a][b];
	      
	      C[a]=C[a-4]-B[a][b]+A[a][b][c];
	      
	      A[a][b][c]=A[a+1][b+1][c]+0.354;
	      
	      A[a][b][c]=A[a][b+4][c+1]-C[a];
	      
	      C[a]=C[a+3]-A[a][b][c];
	      
	      C[a]=A[a][b][c]/C[a]-B[a][b];
	      A[a][b][c]=A[a+1][b+3][c+3]/B[a][b]+C[a];
	      
	      double var_a=C[a]-0.142;
	      double var_b=C[a+2]/0.13;
	    }

    return 0;
}