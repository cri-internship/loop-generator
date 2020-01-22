#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(130, "zeros");
	float *A = create_one_dim_float(150, "zeros");
	float ***B = create_three_dim_float(500, 10, 960, "zeros");
	float *C = create_one_dim_float(480, "zeros");

	for (int c = 5; c < 960; c++)
	  for (int b = 1; b < 10; b++)
	    for (int a = 5; a < 150; a++)
	    {
	      
	      C[a]=D[a];
	      C[a]=C[a]/B[a][b][c];
	      
	      C[a]=C[a-4]*A[a];
	      
	      float var_a=A[a]*0.683;
	      float var_b=A[a]/0.56;
	      
	      float var_c=B[a][b][c]-0.283;
	      float var_d=B[a-4][b-1][c-5]-0.501;
	      
	      A[a]=A[a]+C[a]*C[a]-D[a];
	      B[a][b][c]=A[a-4]/B[a][b][c]+C[a]-D[a];
	    }

    return 0;
}