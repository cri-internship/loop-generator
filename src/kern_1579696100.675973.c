#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(20, "random");
	float *B = create_one_dim_float(380, "random");
	float *A = create_one_dim_float(120, "random");
	float *E = create_one_dim_float(470, "random");
	float ***D = create_three_dim_float(460, 980, 660, "random");

	for (int c = 0; c < 655; c++)
	  for (int b = 0; b < 979; b++)
	    for (int a = 3; a < 20; a++)
	    {
	      
	      D[a][b][c]=D[a+3][b+1][c+5]*E[a]-B[a]/C[a]+A[a];
	      
	      float var_a=A[a]/0.355;
	      A[a]=0.685;
	      
	      E[a]=D[a][b][c]+C[a]*D[a][b][c]-A[a];
	      E[a+5]=C[a]/A[a]-D[a][b][c];
	      
	      E[a]=0.516;
	      
	      A[a]=0.128*E[a]+C[a]/B[a];
	      
	      float var_b=C[a]-0.901;
	      float var_c=C[a-3]-0.809;
	      
	      A[a]=E[a]+B[a]/A[a]-C[a];
	      C[a]=E[a+3]+C[a];
	    }

    return 0;
}