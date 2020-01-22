#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(300, "random");
	float *B = create_one_dim_float(440, "random");

	for (int d = 5; d < 298; d++)
	  for (int c = 5; c < 298; c++)
	    for (int b = 5; b < 298; b++)
	      for (int a = 5; a < 298; a++)
	      {
	        
	       B[a]=B[a-4]/0.819;
	        
	       A[a]=A[a-5]/0.029;
	        
	       A[a]=A[a+2]*0.536;
	        
	       B[a]=A[a];
	      }

    return 0;
}