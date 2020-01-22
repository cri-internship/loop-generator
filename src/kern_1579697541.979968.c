#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(340, 10, 630, "random");
	float ***D = create_three_dim_float(150, 10, 860, "random");
	float **B = create_two_dim_float(590, 590, "random");
	float *A = create_one_dim_float(530, "random");

	for (int b = 0; b < 10; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     D[a][b][a]=D[a-4][b][a-4]+0.993;
	    
	     D[a][b][a]=D[a-1][b][a-5]+0.089;
	  }

    return 0;
}