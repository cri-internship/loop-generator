#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(790, "random");
	float *A = create_one_dim_float(390, "random");
	float *B = create_one_dim_float(520, "random");

	for (int d = 5; d < 387; d++)
	  for (int c = 5; c < 387; c++)
	    for (int b = 5; b < 387; b++)
	      for (int a = 5; a < 387; a++)
	      {
	        
	       B[a]=B[a-3]-0.978;
	        
	       C[a]=C[a-4]*A[a]-B[a];
	        
	       A[a]=A[a-5]-0.916;
	        
	       A[a]=A[a+3]*0.651;
	        
	       C[a]=0.216;
	        
	       float var_a=A[a]*0.214;
	      }

    return 0;
}