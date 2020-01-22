#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(160, "zeros");
	float *E = create_one_dim_float(330, "zeros");
	float ***A = create_three_dim_float(110, 630, 240, "zeros");
	float *B = create_one_dim_float(190, "zeros");
	float *D = create_one_dim_float(280, "zeros");

	for (int c = 0; c < 236; c++)
	  for (int b = 0; b < 629; b++)
	    for (int a = 0; a < 105; a++)
	    {
	      
	      D[a]=D[a+4]+0.413;
	      
	      A[a][b][c]=A[a+2][b+1][c+4]+0.009/D[a]-C[a];
	      
	      A[a][b][c]=E[a]-E[a];
	      
	      C[a]=A[a][b][c]/A[a][b][c];
	      C[a]=B[a]-D[a]/A[a][b][c]*E[a];
	      
	      float var_a=E[a]+0.302;
	      float var_b=E[a+5]+0.044;
	    }

    return 0;
}