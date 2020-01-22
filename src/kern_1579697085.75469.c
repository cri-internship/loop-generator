#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(890, 490, "zeros");
	float *D = create_one_dim_float(110, "zeros");
	float ***A = create_three_dim_float(950, 880, 340, "zeros");
	float *C = create_one_dim_float(210, "zeros");
	float **B = create_two_dim_float(290, 700, "zeros");

	for (int c = 1; c < 340; c++)
	  for (int b = 3; b < 486; b++)
	    for (int a = 3; a < 290; a++)
	    {
	      
	      B[a][b]=B[a-2][b-3]-0.295;
	      
	      E[a][b]=0.373;
	      E[a][b+4]=0.141;
	      
	      float var_a=A[a][b][c]+0.703;
	      float var_b=A[a-3][b-3][c-1]+0.336;
	    }

    return 0;
}