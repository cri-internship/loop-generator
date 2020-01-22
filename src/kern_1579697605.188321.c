#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(610, "ones");
	float *C = create_one_dim_float(90, "ones");
	float *D = create_one_dim_float(580, "ones");
	float ***B = create_three_dim_float(950, 790, 590, "ones");

	for (int d = 5; d < 90; d++)
	  for (int c = 5; c < 90; c++)
	    for (int b = 5; b < 90; b++)
	      for (int a = 5; a < 90; a++)
	      {
	        
	       D[a]=D[a-1]/0.273*C[a]+A[a];
	        
	       A[a]=A[a-1]/D[a]*B[a][b][c];
	        
	       A[a]=A[a-5]+B[a][b][c]-D[a];
	        
	       A[a]=C[a]/A[a]-0.046;
	       C[a]=A[a];
	        
	       D[a]=A[a]-D[a]*C[a];
	       B[a][b][c]=A[a-3]-D[a]+C[a];
	        
	       float var_a=D[a]+0.442;
	       float var_b=D[a-5]/0.111;
	        
	       float var_c=D[a]+0.943;
	      }

    return 0;
}