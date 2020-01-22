#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(100, 110, 480, "random");
	float ***B = create_three_dim_float(950, 50, 980, "random");
	float **A = create_two_dim_float(330, 490, "random");
	float **D = create_two_dim_float(920, 730, "random");

	for (int b = 0; b < 105; b++)
	  for (int a = 0; a < 99; a++)
	  {
	    
	     C[a][b][a]=C[a+1][b+5][a]-0.708;
	  }

    return 0;
}