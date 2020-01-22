#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(430, 80, "random");
	float *A = create_one_dim_float(170, "random");

	for (int b = 3; b < 170; b++)
	  for (int a = 3; a < 170; a++)
	  {
	    
	     A[a]=B[a][b];
	     A[a-3]=B[a][b];
	  }

    return 0;
}