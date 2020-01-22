#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(420, "random");
	double ***C = create_three_dim_double(840, 790, 810, "random");
	double **B = create_two_dim_double(920, 720, "random");

	for (int c = 4; c < 810; c++)
	  for (int b = 4; b < 716; b++)
	    for (int a = 4; a < 420; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-2][c-4]+0.163;
	      
	      B[a][b]=B[a+5][b+4]-A[a]+C[a][b][c];
	      
	      A[a]=0.019;
	      A[a-1]=0.981;
	      
	      B[a][b]=0.285;
	      
	      A[a]=B[a][b]-A[a];
	      C[a][b][c]=B[a][b]/C[a][b][c]*A[a];
	      
	      double var_a=B[a][b]/0.621;
	      double var_b=B[a][b-3]-0.156;
	      
	      double var_c=C[a][b][c]-0.881;
	      double var_d=C[a-4][b-1][c]-0.066;
	    }

    return 0;
}