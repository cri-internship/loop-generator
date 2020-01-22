#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(810, "zeros");
	float ***A = create_three_dim_float(520, 740, 150, "zeros");

	for (int c = 4; c < 150; c++)
	  for (int b = 3; b < 740; b++)
	    for (int a = 2; a < 520; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-3][c-4]/B[a];
	    }

    return 0;
}