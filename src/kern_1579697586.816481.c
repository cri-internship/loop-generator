#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(30, 80, "ones");
	float ***B = create_three_dim_float(760, 460, 990, "ones");
	float *C = create_one_dim_float(680, "ones");

	for (int c = 0; c < 990; c++)
	  for (int b = 2; b < 80; b++)
	    for (int a = 1; a < 30; a++)
	    {
	      
	      A[a][b]=A[a-1][b-2]-0.187;
	      
	      B[a][b][c]=B[a+3][b+1][c]-0.12;
	    }

    return 0;
}