#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(440, 620, 850, "zeros");
	float *C = create_one_dim_float(330, "zeros");
	float *A = create_one_dim_float(640, "zeros");

	for (int c = 0; c < 846; c++)
	  for (int b = 0; b < 615; b++)
	    for (int a = 5; a < 325; a++)
	    {
	      
	      A[a]=A[a-1]+0.221;
	      
	      A[a]=A[a-5]+0.938;
	      
	      C[a]=C[a+5]/0.328;
	      
	      B[a][b][c]=B[a+2][b][c+1]*0.459;
	      
	      B[a][b][c]=B[a][b][c+2]-C[a];
	      
	      B[a][b][c]=B[a][b][c]*A[a]-0.394;
	      C[a]=B[a+3][b+5][c+4]*A[a]+C[a];
	    }

    return 0;
}