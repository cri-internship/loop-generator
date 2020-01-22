#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(900, 800, "random");
	float *B = create_one_dim_float(440, "random");
	float ***C = create_three_dim_float(80, 880, 910, "random");
	float ***D = create_three_dim_float(560, 710, 690, "random");
	float **E = create_two_dim_float(130, 20, "random");

	for (int c = 5; c < 20; c++)
	  for (int b = 4; b < 130; b++)
	    for (int a = 4; a < 130; a++)
	    {
	      
	      E[a][b]=E[a-4][b-5]*0.268;
	    }

    return 0;
}