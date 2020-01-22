#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(230, 270, 670, "zeros");
	float **E = create_two_dim_float(860, 410, "zeros");
	float *B = create_one_dim_float(680, "zeros");
	float ***C = create_three_dim_float(640, 120, 230, "zeros");
	float **D = create_two_dim_float(920, 50, "zeros");

	for (int c = 0; c < 667; c++)
	  for (int b = 0; b < 268; b++)
	    for (int a = 2; a < 230; a++)
	    {
	      
	      B[a]=B[a-2]-0.559;
	      
	      B[a]=B[a-1]*0.99/D[a][b]+C[a][b][c];
	      
	      float var_a=A[a][b][c]+0.768;
	      float var_b=A[a][b+2][c+3]-0.165;
	    }

    return 0;
}