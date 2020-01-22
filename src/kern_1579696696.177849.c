#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(320, "zeros");
	float ***B = create_three_dim_float(120, 450, 780, "zeros");

	for (int c = 0; c < 777; c++)
	  for (int b = 0; b < 447; b++)
	    for (int a = 0; a < 116; a++)
	    {
	      
	      B[a][b][c]=B[a+4][b+3][c+3]/A[a];
	      
	      B[a][b][c]=A[a];
	    }

    return 0;
}