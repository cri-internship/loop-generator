#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(680, 570, "zeros");
	float *C = create_one_dim_float(540, "zeros");
	float *A = create_one_dim_float(320, "zeros");

	for (int c = 0; c < 566; c++)
	  for (int b = 4; b < 317; b++)
	    for (int a = 4; a < 317; a++)
	    {
	      
	      C[a]=C[a-4]/B[a][b]+A[a];
	      
	      B[a][b]=B[a][b+4]-C[a]*C[a];
	      
	      C[a]=0.514;
	      
	      B[a][b]=0.496;
	      
	      float var_a=A[a]+0.962;
	      float var_b=A[a+3]-0.11;
	      
	      float var_c=A[a]-0.704;
	      float var_d=A[a-1]+0.691;
	    }

    return 0;
}