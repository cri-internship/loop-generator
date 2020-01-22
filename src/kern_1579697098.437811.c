#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(230, "zeros");
	float **A = create_two_dim_float(390, 430, "zeros");
	float **B = create_two_dim_float(870, 80, "zeros");
	float *D = create_one_dim_float(830, "zeros");

	for (int c = 0; c < 75; c++)
	  for (int b = 5; b < 227; b++)
	    for (int a = 5; a < 227; a++)
	    {
	      
	      D[a]=D[a-5]*0.221;
	      
	      D[a]=D[a+2]-0.014;
	      
	      B[a][b]=B[a+2][b+5]*A[a][b]+C[a];
	      
	      C[a]=0.306;
	      C[a+3]=0.534;
	    }

    return 0;
}