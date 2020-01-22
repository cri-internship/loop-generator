#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(250, "ones");
	float *B = create_one_dim_float(180, "ones");

	for (int b = 1; b < 180; b++)
	  for (int a = 1; a < 180; a++)
	  {
	    
	     B[a]=B[a-1]*A[a];
	    
	     A[a]=0.111;
	     A[a]=0.467;
	  }

    return 0;
}