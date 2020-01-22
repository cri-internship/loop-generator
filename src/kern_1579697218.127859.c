#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(560, "random");
	float *C = create_one_dim_float(760, "random");
	float *B = create_one_dim_float(620, "random");

	for (int d = 5; d < 555; d++)
	  for (int c = 5; c < 555; c++)
	    for (int b = 5; b < 555; b++)
	      for (int a = 5; a < 555; a++)
	      {
	        
	       C[a]=C[a-5]-0.25;
	        
	       A[a]=A[a+5]+0.757;
	        
	       B[a]=B[a]*A[a]+C[a];
	       B[a]=0.49;
	        
	       A[a]=A[a+2]/0.102;
	        
	       A[a]=C[a]-B[a]/B[a];
	       C[a]=C[a-1]/0.175;
	      }

    return 0;
}