#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(70, 880, "random");
	float **A = create_two_dim_float(240, 770, "random");

	for (int c = 5; c < 766; c++)
	  for (int b = 1; b < 66; b++)
	    for (int a = 1; a < 66; a++)
	    {
	      
	      A[a][b]=A[a+3][b+4]+B[a][b];
	      
	      A[a][b]=0.155;
	      
	      B[a][b]=A[a][b]+0.368;
	      A[a][b]=A[a-1][b-2]*B[a][b];
	      
	      float var_a=B[a][b]+0.788;
	      float var_b=B[a+4][b]/0.36;
	    }

    return 0;
}