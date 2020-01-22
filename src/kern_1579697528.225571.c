#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(320, "zeros");

	for (int b = 0; b < 315; b++)
	  for (int a = 0; a < 315; a++)
	  {
	    
	     A[a]=A[a+5]/0.542;
	    
	     A[a]=0.864;
	    
	     float var_a=A[a]-0.605;
	     float var_b=A[a]+0.803;
	  }

    return 0;
}