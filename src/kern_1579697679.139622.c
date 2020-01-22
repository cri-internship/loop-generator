#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(710, 690, "zeros");
	float **E = create_two_dim_float(340, 320, "zeros");
	float *D = create_one_dim_float(750, "zeros");
	float *B = create_one_dim_float(640, "zeros");
	float *A = create_one_dim_float(230, "zeros");

	for (int c = 0; c < 226; c++)
	  for (int b = 0; b < 226; b++)
	    for (int a = 0; a < 226; a++)
	    {
	      
	      A[a]=A[a+4]/0.412;
	      
	      A[a]=A[a]*C[a][b]+B[a]-E[a][b]/D[a];
	      D[a]=A[a+2]+D[a]/B[a];
	    }

    return 0;
}