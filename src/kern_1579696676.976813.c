#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(320, 870, 420, "random");
	double ***C = create_three_dim_double(620, 400, 60, "random");
	double *B = create_one_dim_double(830, "random");

	for (int d = 3; d < 59; d++)
	  for (int c = 5; c < 397; c++)
	    for (int b = 2; b < 317; b++)
	      for (int a = 2; a < 317; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b-2][c-3]-B[a];
	        
	       A[a][b][c]=A[a+3][b+2][c+3]+0.22;
	        
	       A[a][b][c]=A[a][b+5][c]/0.551-C[a][b][c];
	        
	       B[a]=0.295;
	       B[a+3]=0.769;
	        
	       C[a][b][c]=0.533;
	        
	       double var_a=B[a]-0.191;
	       double var_b=B[a+1]/0.298;
	      }

    return 0;
}