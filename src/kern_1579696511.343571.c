#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(390, "random");
	float *B = create_one_dim_float(80, "random");

	for (int d = 3; d < 75; d++)
	  for (int c = 3; c < 75; c++)
	    for (int b = 3; b < 75; b++)
	      for (int a = 3; a < 75; a++)
	      {
	        
	       A[a]=A[a-3]+0.128;
	        
	       float  var_a=A[a]*0.445;
	        
	       B[a]=B[a-1]+0.361;
	        
	       B[a]=B[a+5]-0.347;
	      }

    return 0;
}