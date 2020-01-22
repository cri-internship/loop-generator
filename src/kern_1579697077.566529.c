#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(300, "ones");
	float *A = create_one_dim_float(590, "ones");

	for (int b = 5; b < 590; b++)
	  for (int a = 5; a < 590; a++)
	  {
	    
	     A[a]=A[a-3]+B[a];
	    
	     A[a]=A[a-2]-B[a];
	    
	     A[a]=A[a-5]*0.521;
	  }

    return 0;
}