#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(560, "zeros");
	float ***D = create_three_dim_float(350, 240, 50, "zeros");
	float *A = create_one_dim_float(510, "zeros");
	float ***C = create_three_dim_float(670, 70, 900, "zeros");
	float **E = create_two_dim_float(950, 820, "zeros");

	for (int c = 0; c < 46; c++)
	  for (int b = 0; b < 237; b++)
	    for (int a = 0; a < 350; a++)
	    {
	      
	      B[a]=B[a+2]+0.734;
	      
	      D[a][b][c]=D[a][b+3][c+4]-0.388;
	      
	      float var_a=A[a]*0.692;
	      float var_b=A[a+4]+0.49;
	    }

    return 0;
}