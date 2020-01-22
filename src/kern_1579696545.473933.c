#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(470, "zeros");
	float **A = create_two_dim_float(410, 240, "zeros");

	for (int b = 0; b < 235; b++)
	  for (int a = 1; a < 406; a++)
	  {
	    
	     A[a][b]=B[a];
	     A[a][b]=0.103;
	    
	     A[a][b]=A[a][b]/B[a];
	     B[a]=A[a+4][b+5]/0.245;
	    
	     float var_a=A[a][b]-0.856;
	     float var_b=A[a+2][b+2]-0.924;
	    
	     A[a][b]=B[a]/A[a][b];
	     B[a]=B[a-1]*A[a][b];
	  }

    return 0;
}