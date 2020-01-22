#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(80, "random");
	float ***C = create_three_dim_float(240, 510, 740, "random");
	float **A = create_two_dim_float(660, 220, "random");

	for (int b = 5; b < 510; b++)
	  for (int a = 1; a < 240; a++)
	  {
	    
	     C[a][b][a]=C[a][b-5][a-1]-B[a];
	  }

    return 0;
}