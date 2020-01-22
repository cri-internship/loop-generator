#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(420, 550, "zeros");
	float *B = create_one_dim_float(900, "zeros");

	for (int c = 0; c < 550; c++)
	  for (int b = 1; b < 415; b++)
	    for (int a = 1; a < 415; a++)
	    {
	      
	      B[a]=B[a-1]-0.141;
	      
	      A[a][b]=0.293;
	      A[a+5][b]=0.784;
	    }

    return 0;
}