#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(890, "ones");
	float ***C = create_three_dim_float(400, 960, 30, "ones");
	float *E = create_one_dim_float(600, "ones");
	float **A = create_two_dim_float(430, 640, "ones");
	float *B = create_one_dim_float(870, "ones");

	for (int b = 0; b < 887; b++)
	  for (int a = 0; a < 887; a++)
	  {
	    
	     D[a]=D[a+3]+C[a][b][a];
	  }

    return 0;
}