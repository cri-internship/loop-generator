#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(730, "random");
	float *B = create_one_dim_float(960, "random");
	float **C = create_two_dim_float(10, 690, "random");

	for (int d = 4; d < 690; d++)
	  for (int c = 5; c < 10; c++)
	    for (int b = 5; b < 10; b++)
	      for (int a = 5; a < 10; a++)
	      {
	        
	       A[a]=A[a-5]*0.588;
	        
	       B[a]=B[a-2]+A[a]/A[a];
	        
	       B[a]=B[a+3]+0.576;
	        
	       A[a]=0.347;
	        
	       A[a]=C[a][b]/B[a]+A[a];
	       B[a]=C[a-1][b-4]*B[a]/A[a];
	      }

    return 0;
}