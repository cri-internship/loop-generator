#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(90, 820, "zeros");
	float **B = create_two_dim_float(50, 190, "zeros");

	for (int c = 0; c < 816; c++)
	  for (int b = 5; b < 86; b++)
	    for (int a = 5; a < 86; a++)
	    {
	      
	      A[a][b]=A[a-5][b]/0.577;
	      
	      A[a][b]=0.821;
	      
	      float var_a=A[a][b]/0.942;
	      float var_b=A[a+1][b+3]-0.108;
	      
	      float var_c=A[a][b]-0.862;
	      
	      A[a][b]=A[a][b]*0.755;
	      B[a][b]=A[a][b+4]+0.154;
	    }

    return 0;
}