#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(800, 150, "random");
	double **C = create_two_dim_double(970, 970, "random");
	double **B = create_two_dim_double(430, 340, "random");

	for (int d = 4; d < 150; d++)
	  for (int c = 4; c < 430; c++)
	    for (int b = 4; b < 430; b++)
	      for (int a = 4; a < 430; a++)
	      {
	        
	       A[a][b]=A[a-4][b-1]+C[a][b];
	        
	       double var_a=B[a][b]*0.257;
	       double var_b=B[a-1][b-4]/0.598;
	        
	       B[a][b]=A[a][b]/B[a][b];
	       A[a][b]=A[a-2][b-1]/B[a][b];
	      }

    return 0;
}