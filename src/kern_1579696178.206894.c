#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(600, 620, 50, "zeros");
	float **A = create_two_dim_float(350, 1000, "zeros");
	float *C = create_one_dim_float(220, "zeros");
	float **E = create_two_dim_float(290, 90, "zeros");
	float *D = create_one_dim_float(800, "zeros");

	for (int c = 0; c < 48; c++)
	  for (int b = 4; b < 615; b++)
	    for (int a = 4; a < 220; a++)
	    {
	      
	      C[a]=C[a-4]/0.96;
	      
	      B[a][b][c]=B[a+1][b+5][c+2]+0.645;
	      
	      B[a][b][c]=0.73;
	      
	      E[a][b]=C[a]/D[a]-B[a][b][c];
	      C[a]=C[a-1]*E[a][b]-0.342/A[a][b]+D[a];
	      
	      float var_a=A[a][b]/0.585;
	      float var_b=A[a+2][b+2]*0.171;
	    }

    return 0;
}