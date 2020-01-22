#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(470, "ones");
	float **A = create_two_dim_float(870, 300, "ones");
	float ***B = create_three_dim_float(270, 140, 960, "ones");

	for (int c = 0; c < 956; c++)
	  for (int b = 3; b < 137; b++)
	    for (int a = 2; a < 267; a++)
	    {
	      
	      A[a][b]=0.269;
	      A[a-2][b-3]=0.485;
	      
	      B[a][b][c]=0.051-C[a];
	      B[a+3][b+3][c+4]=C[a]-A[a][b];
	    }

    return 0;
}