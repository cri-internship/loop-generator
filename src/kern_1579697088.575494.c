#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(850, 440, "zeros");
	float *B = create_one_dim_float(790, "zeros");
	float **E = create_two_dim_float(320, 120, "zeros");
	float ***C = create_three_dim_float(630, 930, 690, "zeros");
	float *A = create_one_dim_float(620, "zeros");

	for (int c = 0; c < 688; c++)
	  for (int b = 0; b < 928; b++)
	    for (int a = 4; a < 620; a++)
	    {
	      
	      C[a][b][c]=C[a+5][b+2][c+2]/0.744;
	      
	      A[a]=0.213;
	      A[a-1]=0.352;
	      
	      float var_a=B[a]*0.479;
	      float var_b=B[a-4]+0.396;
	    }

    return 0;
}