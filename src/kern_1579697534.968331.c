#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(160, "ones");
	float *B = create_one_dim_float(320, "ones");
	float ***A = create_three_dim_float(200, 710, 840, "ones");

	for (int c = 0; c < 160; c++)
	  for (int b = 0; b < 160; b++)
	    for (int a = 0; a < 160; a++)
	    {
	      
	      A[a][b][c]=C[a]/B[a];
	      C[a]=C[a]-0.817+B[a];
	    }

    return 0;
}