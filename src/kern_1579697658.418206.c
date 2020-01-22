#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(840, 290, "zeros");
	float **B = create_two_dim_float(850, 280, "zeros");
	float **C = create_two_dim_float(310, 880, "zeros");

	for (int c = 4; c < 288; c++)
	  for (int b = 0; b < 836; b++)
	    for (int a = 0; a < 836; a++)
	    {
	      
	      A[a][b]=B[a][b]+C[a][b];
	      A[a][b-4]=0.007;
	      
	      A[a][b]=B[a][b]/C[a][b];
	    }

    return 0;
}