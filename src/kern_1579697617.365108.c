#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(140, "ones");
	float ***E = create_three_dim_float(170, 200, 390, "ones");
	float *D = create_one_dim_float(740, "ones");
	float *B = create_one_dim_float(800, "ones");
	float ***A = create_three_dim_float(680, 260, 710, "ones");

	for (int c = 0; c < 737; c++)
	  for (int b = 0; b < 737; b++)
	    for (int a = 0; a < 737; a++)
	    {
	      
	      B[a]=D[a]+C[a];
	      C[a]=D[a+3]/E[a][b][c]-B[a];
	    }

    return 0;
}