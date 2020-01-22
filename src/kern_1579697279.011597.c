#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(50, "ones");
	float **A = create_two_dim_float(210, 600, "ones");
	float ***C = create_three_dim_float(790, 980, 850, "ones");

	for (int b = 0; b < 976; b++)
	  for (int a = 0; a < 785; a++)
	  {
	    
	     C[a][b][a]=C[a+4][b+2][a+4]-B[a];
	    
	     C[a][b][a]=0.42;
	  }

    return 0;
}