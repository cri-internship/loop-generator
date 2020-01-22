#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(530, 660, 330, "random");
	float **C = create_two_dim_float(730, 110, "random");
	float **B = create_two_dim_float(90, 850, "random");
	float **D = create_two_dim_float(830, 510, "random");

	for (int c = 0; c < 110; c++)
	  for (int b = 1; b < 730; b++)
	    for (int a = 1; a < 730; a++)
	    {
	      
	      C[a][b]=0.023;
	      C[a-1][b]=0.984;
	    }

    return 0;
}