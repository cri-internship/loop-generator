#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(130, "zeros");
	float **C = create_two_dim_float(380, 400, "zeros");
	float ***B = create_three_dim_float(750, 660, 640, "zeros");

	for (int c = 0; c < 395; c++)
	  for (int b = 0; b < 377; b++)
	    for (int a = 0; a < 377; a++)
	    {
	      
	      C[a][b]=B[a][b][c];
	      C[a+3][b+5]=0.724;
	    }

    return 0;
}