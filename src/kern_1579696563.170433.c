#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(530, 170, "zeros");
	float **B = create_two_dim_float(880, 240, "zeros");

	for (int c = 0; c < 239; c++)
	  for (int b = 0; b < 876; b++)
	    for (int a = 0; a < 876; a++)
	    {
	      
	      B[a][b]=B[a+4][b+1]+A[a][b];
	      
	      float var_a=B[a][b]*0.467;
	      float var_b=B[a+1][b+1]-0.967;
	    }

    return 0;
}