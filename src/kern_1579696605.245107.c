#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(300, "zeros");
	float *A = create_one_dim_float(180, "zeros");

	for (int b = 5; b < 175; b++)
	  for (int a = 5; a < 175; a++)
	  {
	    
	     A[a]=A[a+5]*0.943;
	    
	     A[a]=0.676;
	    
	     B[a]=0.79;
	     B[a]=A[a];
	    
	     float var_a=A[a]*0.223;
	  }

    return 0;
}