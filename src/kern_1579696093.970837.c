#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(300, "ones");
	float **A = create_two_dim_float(610, 220, "ones");
	float *C = create_one_dim_float(340, "ones");
	float **B = create_two_dim_float(260, 800, "ones");

	for (int c = 0; c < 795; c++)
	  for (int b = 5; b < 256; b++)
	    for (int a = 5; a < 256; a++)
	    {
	      
	      D[a]=D[a-5]/0.749;
	      
	      C[a]=C[a-3]-D[a];
	      
	      B[a][b]=B[a+4][b]/A[a][b];
	      
	      B[a][b]=B[a+2][b+5]-0.547;
	      
	      D[a]=C[a]-B[a][b];
	      
	      C[a]=0.198;
	    }

    return 0;
}