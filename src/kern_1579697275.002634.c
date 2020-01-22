#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(100, "random");
	float *C = create_one_dim_float(880, "random");
	float ***A = create_three_dim_float(890, 490, 960, "random");

	for (int b = 0; b < 490; b++)
	  for (int a = 4; a < 100; a++)
	  {
	    
	     B[a]=B[a-3]+C[a];
	    
	     A[a][b][a]=A[a+1][b][a+3]*0.984;
	    
	     C[a]=C[a+5]+0.298;
	    
	     B[a]=A[a][b][a];
	  }

    return 0;
}