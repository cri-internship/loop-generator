#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(150, 430, "random");
	float *B = create_one_dim_float(220, "random");

	for (int b = 0; b < 430; b++)
	  for (int a = 0; a < 147; a++)
	  {
	    
	     A[a][b]=B[a];
	     A[a+3][b]=B[a];
	  }

    return 0;
}