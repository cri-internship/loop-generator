#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(920, "zeros");
	float **C = create_two_dim_float(940, 960, "zeros");
	float ***B = create_three_dim_float(110, 970, 920, "zeros");

	for (int c = 0; c < 958; c++)
	  for (int b = 2; b < 920; b++)
	    for (int a = 2; a < 920; a++)
	    {
	      
	      C[a][b]=C[a+5][b+2]*0.945;
	      
	      A[a]=0.515;
	      A[a-2]=B[a][b][c]*B[a][b][c];
	    }

    return 0;
}