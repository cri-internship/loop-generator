#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(920, "zeros");
	float **C = create_two_dim_float(10, 990, "zeros");
	float ***B = create_three_dim_float(920, 740, 960, "zeros");

	for (int b = 2; b < 740; b++)
	  for (int a = 5; a < 920; a++)
	  {
	    
	     B[a][b][a]=0.694;
	     B[a-3][b-2][a-5]=0.282;
	  }

    return 0;
}