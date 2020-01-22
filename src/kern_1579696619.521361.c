#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(940, "random");
	float *A = create_one_dim_float(920, "random");
	float ***D = create_three_dim_float(430, 90, 200, "random");
	float *B = create_one_dim_float(670, "random");

	for (int d = 1; d < 200; d++)
	  for (int c = 3; c < 87; c++)
	    for (int b = 5; b < 428; b++)
	      for (int a = 5; a < 428; a++)
	      {
	        
	       D[a][b][c]=D[a-5][b-3][c-1]*C[a]-B[a];
	        
	       C[a]=C[a+5]*0.886;
	        
	       D[a][b][c]=D[a+2][b+3][c]/A[a];
	        
	       C[a]=0.29;
	        
	       B[a]=C[a]-D[a][b][c];
	       C[a]=C[a+4]+D[a][b][c];
	        
	       float var_a=B[a]/0.438;
	       float var_b=B[a-2]-0.023;
	        
	       float var_c=C[a]+0.192;
	       float var_d=C[a+1]/0.694;
	      }

    return 0;
}