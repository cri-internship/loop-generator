#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(260, "ones");
	float *D = create_one_dim_float(350, "ones");
	float **C = create_two_dim_float(310, 340, "ones");
	float *E = create_one_dim_float(620, "ones");
	float ***B = create_three_dim_float(250, 100, 580, "ones");

	for (int c = 3; c < 340; c++)
	  for (int b = 3; b < 310; b++)
	    for (int a = 3; a < 310; a++)
	    {
	      
	      C[a][b]=C[a-3][b-3]-0.86;
	    }

    return 0;
}