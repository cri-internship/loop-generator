#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(860, "ones");
	float *C = create_one_dim_float(10, "ones");
	float *D = create_one_dim_float(860, "ones");
	float ***B = create_three_dim_float(980, 400, 320, "ones");

	for (int c = 0; c < 317; c++)
	  for (int b = 0; b < 400; b++)
	    for (int a = 0; a < 977; a++)
	    {
	      
	      B[a][b][c]=B[a+3][b][c+3]*A[a]+0.341/C[a];
	    }

    return 0;
}