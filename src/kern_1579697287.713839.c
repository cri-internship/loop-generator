#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(230, 60, "random");
	float **B = create_two_dim_float(780, 630, "random");
	float *C = create_one_dim_float(400, "random");

	for (int b = 5; b < 630; b++)
	  for (int a = 0; a < 780; a++)
	  {
	    
	     B[a][b]=B[a][b-5]*A[a][b];
	  }

    return 0;
}