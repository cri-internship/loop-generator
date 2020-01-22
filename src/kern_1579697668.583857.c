#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(220, 290, "zeros");
	float **C = create_two_dim_float(510, 480, "zeros");
	float *A = create_one_dim_float(950, "zeros");

	for (int b = 5; b < 290; b++)
	  for (int a = 2; a < 220; a++)
	  {
	    
	     B[a][b]=B[a-2][b-5]*C[a][b]/A[a];
	  }

    return 0;
}