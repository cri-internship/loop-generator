#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(750, 130, 750, "ones");
	float **A = create_two_dim_float(200, 640, "ones");
	float *C = create_one_dim_float(660, "ones");
	float *B = create_one_dim_float(20, "ones");

	for (int b = 5; b < 640; b++)
	  for (int a = 2; a < 200; a++)
	  {
	    
	     A[a][b]=A[a-2][b-5]-0.167;
	  }

    return 0;
}