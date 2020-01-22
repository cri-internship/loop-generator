#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(320, 730, "zeros");
	float **A = create_two_dim_float(880, 300, "zeros");

	for (int c = 5; c < 298; c++)
	  for (int b = 5; b < 320; b++)
	    for (int a = 5; a < 320; a++)
	    {
	      
	      B[a][b]=B[a-2][b-2]+A[a][b];
	      
	      B[a][b]=B[a][b+4]-A[a][b];
	      
	      A[a][b]=B[a][b];
	      A[a-5][b]=B[a][b];
	      
	      B[a][b]=A[a][b]/B[a][b];
	      A[a][b]=A[a+2][b+2]/B[a][b];
	      
	      A[a][b]=B[a][b]/A[a][b];
	      A[a][b]=B[a-3][b-5]/0.404;
	      
	      float var_a=A[a][b]*0.18;
	      float var_b=A[a+5][b+1]+0.889;
	      
	      A[a][b]=A[a][b]+0.961;
	      B[a][b]=A[a+3][b+1]/B[a][b];
	    }

    return 0;
}