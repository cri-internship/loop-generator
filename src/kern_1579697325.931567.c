#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(460, 210, "zeros");
	float *A = create_one_dim_float(860, "zeros");

	for (int c = 5; c < 210; c++)
	  for (int b = 4; b < 460; b++)
	    for (int a = 4; a < 460; a++)
	    {
	      
	      A[a]=B[a][b];
	      A[a+2]=B[a][b];
	      
	      B[a][b]=0.878;
	      B[a][b-5]=A[a];
	      
	      A[a]=B[a][b];
	    }

    return 0;
}