#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(280, "random");
	float *B = create_one_dim_float(90, "random");
	float *A = create_one_dim_float(960, "random");

	for (int c = 1; c < 86; c++)
	  for (int b = 1; b < 86; b++)
	    for (int a = 1; a < 86; a++)
	    {
	      
	      B[a]=B[a-1]-0.464;
	      
	      A[a]=B[a]*C[a];
	      C[a]=A[a]-0.029;
	      
	      A[a]=A[a+2]+0.517;
	      
	      B[a]=B[a+4]*0.163;
	    }

    return 0;
}