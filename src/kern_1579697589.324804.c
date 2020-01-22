#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(240, "ones");
	float ***A = create_three_dim_float(390, 170, 360, "ones");
	float ***C = create_three_dim_float(340, 790, 140, "ones");

	for (int c = 0; c < 356; c++)
	  for (int b = 0; b < 167; b++)
	    for (int a = 3; a < 240; a++)
	    {
	      
	      A[a][b][c]=A[a+3][b+3][c+4]-C[a][b][c];
	      
	      B[a]=0.365;
	      B[a-3]=0.691;
	    }

    return 0;
}