#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(870, 240, 760, "random");
	float ***B = create_three_dim_float(40, 460, 920, "random");
	float *A = create_one_dim_float(480, "random");

	for (int b = 4; b < 240; b++)
	  for (int a = 3; a < 870; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-4][a-3]+0.25;
	  }

    return 0;
}