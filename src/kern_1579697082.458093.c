#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(450, 360, "random");
	float **A = create_two_dim_float(700, 590, "random");
	float *B = create_one_dim_float(450, "random");
	float ***D = create_three_dim_float(830, 30, 650, "random");
	float ***C = create_three_dim_float(60, 890, 1000, "random");

	for (int c = 0; c < 588; c++)
	  for (int b = 0; b < 699; b++)
	    for (int a = 0; a < 699; a++)
	    {
	      
	      A[a][b]=A[a+1][b+2]-0.849;
	    }

    return 0;
}