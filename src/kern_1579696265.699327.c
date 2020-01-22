#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(720, "zeros");
	float ***B = create_three_dim_float(670, 650, 670, "zeros");
	float ***C = create_three_dim_float(710, 440, 920, "zeros");

	for (int c = 3; c < 667; c++)
	  for (int b = 4; b < 437; b++)
	    for (int a = 4; a < 668; a++)
	    {
	      
	      B[a][b][c]=B[a+2][b][c+3]/0.511;
	      
	      C[a][b][c]=C[a+2][b+3][c+3]/0.263;
	      
	      B[a][b][c]=0.954;
	      
	      A[a]=0.255;
	      A[a-4]=0.786;
	      
	      float var_a=A[a]+0.251;
	      float var_b=A[a+5]+0.873;
	    }

    return 0;
}