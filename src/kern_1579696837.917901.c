#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(200, 450, 820, "ones");
	float *A = create_one_dim_float(680, "ones");

	for (int c = 2; c < 680; c++)
	  for (int b = 2; b < 680; b++)
	    for (int a = 2; a < 680; a++)
	    {
	      
	      A[a]=A[a-2]-B[a][b][c];
	    }

    return 0;
}