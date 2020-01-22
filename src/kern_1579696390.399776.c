#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(390, "zeros");
	float ***B = create_three_dim_float(830, 480, 280, "zeros");
	float *A = create_one_dim_float(490, "zeros");

	for (int c = 2; c < 280; c++)
	  for (int b = 3; b < 480; b++)
	    for (int a = 3; a < 389; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-3][c-2]-0.941;
	      
	      C[a]=0.819;
	      C[a+1]=0.394;
	    }

    return 0;
}