#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(990, "random");
	float **A = create_two_dim_float(670, 560, "random");

	for (int c = 3; c < 560; c++)
	  for (int b = 3; b < 670; b++)
	    for (int a = 3; a < 670; a++)
	    {
	      
	      B[a]=B[a+5]*A[a][b];
	      
	      B[a]=0.108;
	      
	      A[a][b]=0.324;
	      A[a-3][b-3]=0.161;
	      
	      A[a][b]=B[a]/A[a][b];
	      B[a]=B[a]*A[a][b];
	    }

    return 0;
}