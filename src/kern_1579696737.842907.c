#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(40, "zeros");
	float ***C = create_three_dim_float(570, 810, 130, "zeros");
	float *B = create_one_dim_float(720, "zeros");
	float **A = create_two_dim_float(550, 960, "zeros");

	for (int c = 0; c < 126; c++)
	  for (int b = 0; b < 808; b++)
	    for (int a = 2; a < 40; a++)
	    {
	      
	      C[a][b][c]=C[a][b+2][c+4]/D[a]-B[a]*A[a][b];
	      
	      float var_a=D[a]+0.912;
	      float var_b=D[a-2]+0.982;
	    }

    return 0;
}