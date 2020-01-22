#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(620, "ones");
	float ***A = create_three_dim_float(540, 280, 590, "ones");

	for (int c = 0; c < 585; c++)
	  for (int b = 0; b < 278; b++)
	    for (int a = 3; a < 539; a++)
	    {
	      
	      B[a]=B[a-3]/A[a][b][c];
	      
	      A[a][b][c]=0.171;
	      A[a+1][b+2][c+5]=0.23;
	      
	      float var_a=B[a]-0.868;
	      float var_b=B[a+2]/0.459;
	      
	      A[a][b][c]=B[a]/A[a][b][c];
	      B[a]=B[a+1]/A[a][b][c];
	    }

    return 0;
}