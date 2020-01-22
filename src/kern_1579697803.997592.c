#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(690, 80, "zeros");
	float ***B = create_three_dim_float(870, 980, 130, "zeros");
	float **C = create_two_dim_float(440, 810, "zeros");

	for (int c = 4; c < 80; c++)
	  for (int b = 4; b < 440; b++)
	    for (int a = 4; a < 440; a++)
	    {
	      
	      C[a][b]=C[a-4][b-4]+A[a][b]-B[a][b][c];
	      
	      A[a][b]=A[a-3][b-1]-0.179;
	      
	      C[a][b]=B[a][b][c];
	    }

    return 0;
}