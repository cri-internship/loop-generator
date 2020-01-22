#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(490, "zeros");
	float ***A = create_three_dim_float(220, 250, 970, "zeros");
	float **D = create_two_dim_float(800, 50, "zeros");
	float ***B = create_three_dim_float(1000, 510, 710, "zeros");

	for (int c = 0; c < 967; c++)
	  for (int b = 0; b < 247; b++)
	    for (int a = 0; a < 215; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b+3][c+3]/0.983;
	      
	      A[a][b][c]=A[a+4][b][c+3]+0.289;
	    }

    return 0;
}