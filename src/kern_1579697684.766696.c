#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(50, "ones");
	float **D = create_two_dim_float(510, 160, "ones");
	float ***A = create_three_dim_float(250, 70, 1000, "ones");
	float ***C = create_three_dim_float(900, 120, 940, "ones");

	for (int b = 4; b < 120; b++)
	  for (int a = 3; a < 900; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-4][a-3]+B[a];
	  }

    return 0;
}