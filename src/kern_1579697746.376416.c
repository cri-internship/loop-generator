#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(460, 630, "zeros");
	float **D = create_two_dim_float(520, 690, "zeros");
	float **C = create_two_dim_float(540, 50, "zeros");
	float *A = create_one_dim_float(660, "zeros");

	for (int c = 5; c < 50; c++)
	  for (int b = 5; b < 459; b++)
	    for (int a = 5; a < 459; a++)
	    {
	      
	      C[a][b]=C[a-3][b-4]/0.543*D[a][b]+A[a];
	      
	      B[a][b]=B[a-1][b]*0.711;
	      
	      B[a][b]=B[a+1][b+5]*0.331/C[a][b];
	      
	      A[a]=B[a][b]/C[a][b]+D[a][b];
	      A[a-5]=D[a][b]/0.039-B[a][b];
	      
	      float var_a=D[a][b]+0.117;
	      float var_b=D[a+1][b+1]-0.944;
	      
	      float var_c=B[a][b]/0.315;
	      float var_d=B[a-4][b-5]*0.506;
	    }

    return 0;
}