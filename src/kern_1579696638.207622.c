#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(310, 960, 950, "random");
	float ***C = create_three_dim_float(730, 430, 640, "random");
	float *A = create_one_dim_float(270, "random");

	for (int b = 0; b < 959; b++)
	  for (int a = 0; a < 307; a++)
	  {
	    
	     B[a][b][a]=B[a+3][b+1][a+1]-0.591;
	  }

    return 0;
}