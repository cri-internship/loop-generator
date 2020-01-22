#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(190, 890, 390, "random");
	float **A = create_two_dim_float(590, 310, "random");
	float **D = create_two_dim_float(480, 790, "random");
	float **B = create_two_dim_float(450, 500, "random");

	for (int c = 0; c < 496; c++)
	  for (int b = 0; b < 450; b++)
	    for (int a = 0; a < 450; a++)
	    {
	      
	      B[a][b]=B[a][b+4]-D[a][b]/C[a][b][c];
	    }

    return 0;
}