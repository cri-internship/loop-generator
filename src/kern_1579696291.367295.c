#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(980, 960, "random");
	float *C = create_one_dim_float(320, "random");
	float *B = create_one_dim_float(910, "random");
	float *A = create_one_dim_float(890, "random");

	for (int c = 0; c < 960; c++)
	  for (int b = 5; b < 316; b++)
	    for (int a = 5; a < 316; a++)
	    {
	      
	      B[a]=B[a-5]-A[a];
	      
	      D[a][b]=D[a+4][b]+0.059;
	      
	      C[a]=0.252;
	      C[a+4]=0.748;
	      
	      C[a]=0.233;
	      
	      float var_a=A[a]*0.413;
	      float var_b=A[a-1]+0.253;
	    }

    return 0;
}