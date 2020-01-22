#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(220, "random");
	float *A = create_one_dim_float(270, "random");

	for (int d = 0; d < 215; d++)
	  for (int c = 0; c < 215; c++)
	    for (int b = 0; b < 215; b++)
	      for (int a = 0; a < 215; a++)
	      {
	        
	       A[a]=0.791;
	       float  var_a=A[a]*0.395;
	        
	       B[a]=B[a]/A[a];
	       A[a]=B[a+5]+A[a];
	        
	       A[a]=B[a]/A[a];
	      }

    return 0;
}