#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(420, "random");
	float *D = create_one_dim_float(280, "random");
	float **B = create_two_dim_float(380, 790, "random");
	float *A = create_one_dim_float(900, "random");

	for (int c = 0; c < 788; c++)
	  for (int b = 0; b < 275; b++)
	    for (int a = 0; a < 275; a++)
	    {
	      
	      A[a]=B[a][b]*D[a];
	      A[a+5]=C[a]/C[a];
	      
	      D[a]=0.497;
	      D[a+5]=0.025;
	      
	      B[a][b]=A[a]-C[a]*A[a];
	      B[a+1][b+2]=C[a];
	      
	      D[a]=0.247;
	    }

    return 0;
}