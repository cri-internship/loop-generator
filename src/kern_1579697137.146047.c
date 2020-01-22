#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(710, "random");
	float **B = create_two_dim_float(420, 200, "random");

	for (int b = 5; b < 200; b++)
	  for (int a = 2; a < 420; a++)
	  {
	    
	     B[a][b]=B[a-2][b-5]*0.663;
	    
	     A[a]=A[a+2]-B[a][b];
	    
	     A[a]=0.264;
	  }

    return 0;
}