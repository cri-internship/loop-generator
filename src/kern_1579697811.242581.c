#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(180, "random");
	float *A = create_one_dim_float(60, "random");
	float **B = create_two_dim_float(580, 760, "random");

	for (int b = 0; b < 756; b++)
	  for (int a = 0; a < 180; a++)
	  {
	    
	     B[a][b]=B[a+3][b+4]*C[a];
	    
	     C[a]=C[a]-B[a][b];
	     C[a]=A[a]*A[a];
	  }

    return 0;
}