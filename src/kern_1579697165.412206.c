#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(530, "ones");

	for (int b = 3; b < 530; b++)
	  for (int a = 3; a < 530; a++)
	  {
	    
	     A[a]=A[a-3]/0.243;
	  }

    return 0;
}