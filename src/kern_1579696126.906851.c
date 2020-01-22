#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(420, "random");
	float **B = create_two_dim_float(400, 350, "random");

	for (int c = 0; c < 346; c++)
	  for (int b = 0; b < 397; b++)
	    for (int a = 0; a < 397; a++)
	    {
	      
	      B[a][b]=B[a][b]*A[a];
	      A[a]=B[a+3][b+4]+0.687;
	    }

    return 0;
}