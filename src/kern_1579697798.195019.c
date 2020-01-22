#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(10, 350, "random");
	float *D = create_one_dim_float(150, "random");
	float **A = create_two_dim_float(560, 190, "random");
	float **C = create_two_dim_float(150, 90, "random");

	for (int c = 5; c < 190; c++)
	  for (int b = 1; b < 560; b++)
	    for (int a = 1; a < 560; a++)
	    {
	      
	      A[a][b]=A[a-1][b-5]*D[a]/C[a][b];
	    }

    return 0;
}