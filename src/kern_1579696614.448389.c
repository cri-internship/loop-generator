#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(890, 390, "zeros");
	float ***C = create_three_dim_float(70, 460, 240, "zeros");
	float **B = create_two_dim_float(730, 390, "zeros");

	for (int c = 5; c < 240; c++)
	  for (int b = 3; b < 388; b++)
	    for (int a = 2; a < 70; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-3][c-5]/A[a][b];
	      
	      A[a][b]=A[a][b-1]-0.231;
	      
	      B[a][b]=B[a+5][b+2]*0.273;
	      
	      float var_a=C[a][b][c]/0.053;
	      float var_b=C[a-2][b][c-1]/0.897;
	    }

    return 0;
}