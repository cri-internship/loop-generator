#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(50, "zeros");
	float *A = create_one_dim_float(750, "zeros");

	for (int c = 4; c < 48; c++)
	  for (int b = 4; b < 48; b++)
	    for (int a = 4; a < 48; a++)
	    {
	      
	      A[a]=A[a+3]+0.29;
	      
	      A[a]=A[a+2]+0.821;
	      
	      B[a]=0.871;
	      B[a+2]=0.588;
	      
	      B[a]=A[a]-0.626;
	      A[a]=A[a-4]*B[a];
	    }

    return 0;
}