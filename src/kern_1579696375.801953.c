#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(210, 320, "zeros");
	float ***D = create_three_dim_float(920, 460, 800, "zeros");
	float *B = create_one_dim_float(570, "zeros");
	float **A = create_two_dim_float(760, 400, "zeros");
	float ***E = create_three_dim_float(110, 650, 800, "zeros");

	for (int c = 3; c < 320; c++)
	  for (int b = 3; b < 210; b++)
	    for (int a = 3; a < 210; a++)
	    {
	      
	      C[a][b]=C[a-3][b-3]*0.592;
	    }

    return 0;
}