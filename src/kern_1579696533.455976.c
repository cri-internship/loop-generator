#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(740, "random");

	for (int b = 1; b < 740; b++)
	  for (int a = 1; a < 740; a++)
	  {
	    
	     A[a]=A[a-1]-0.424;
	  }

    return 0;
}