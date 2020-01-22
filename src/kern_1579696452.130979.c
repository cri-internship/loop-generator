#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(150, 980, "zeros");
	float *B = create_one_dim_float(90, "zeros");

	for (int b = 0; b < 976; b++)
	  for (int a = 0; a < 147; a++)
	  {
	    
	     A[a][b]=0.702;
	     A[a+3][b+4]=0.317;
	  }

    return 0;
}