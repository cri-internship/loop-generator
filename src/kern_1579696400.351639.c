#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(600, 540, "ones");
	float *A = create_one_dim_float(30, "ones");
	float **B = create_two_dim_float(300, 410, "ones");

	for (int c = 4; c < 406; c++)
	  for (int b = 5; b < 27; b++)
	    for (int a = 5; a < 27; a++)
	    {
	      
	      C[a][b]=C[a-5][b-4]-A[a];
	      
	      B[a][b]=B[a][b+4]+0.206;
	      
	      C[a][b]=C[a+2][b+4]*B[a][b]/B[a][b];
	      
	      C[a][b]=B[a][b]/C[a][b];
	      A[a]=B[a-3][b-4]+0.899*C[a][b];
	      
	      float var_a=A[a]*0.619;
	      float var_b=A[a+3]-0.706;
	    }

    return 0;
}