#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(860, 310, "zeros");
	float *A = create_one_dim_float(240, "zeros");

	for (int c = 3; c < 305; c++)
	  for (int b = 5; b < 240; b++)
	    for (int a = 5; a < 240; a++)
	    {
	      
	      A[a]=A[a-3]*0.86;
	      
	      B[a][b]=B[a-3][b-3]/0.815;
	      
	      float  var_a=B[a][b]+0.978;
	      
	      B[a][b]=B[a+2][b+5]*0.208;
	      
	      B[a][b]=A[a]-B[a][b];
	      A[a]=A[a-5]*0.379;
	    }

    return 0;
}