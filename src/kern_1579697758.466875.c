#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(680, "ones");
	float *B = create_one_dim_float(420, "ones");
	float *A = create_one_dim_float(510, "ones");
	float *D = create_one_dim_float(680, "ones");

	for (int c = 5; c < 417; c++)
	  for (int b = 5; b < 417; b++)
	    for (int a = 5; a < 417; a++)
	    {
	      
	      A[a]=A[a-5]+0.74;
	      
	      B[a]=B[a+3]-D[a]*C[a];
	      
	      B[a]=A[a]*D[a];
	      
	      C[a]=B[a]*A[a];
	      C[a-1]=B[a]-D[a]*A[a];
	      
	      C[a]=0.562;
	      
	      A[a]=C[a]-0.686/D[a];
	      D[a]=C[a+3]*A[a]/D[a];
	    }

    return 0;
}