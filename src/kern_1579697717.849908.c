#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(660, "zeros");
	float **B = create_two_dim_float(340, 710, "zeros");

	for (int c = 0; c < 707; c++)
	  for (int b = 5; b < 337; b++)
	    for (int a = 5; a < 337; a++)
	    {
	      
	      A[a]=A[a-1]*0.09;
	      
	      A[a]=A[a-5]+0.587;
	      
	      B[a][b]=B[a+3][b+3]-0.963;
	    }

    return 0;
}