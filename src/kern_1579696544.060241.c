#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(990, 380, "random");
	float **C = create_two_dim_float(560, 930, "random");
	float ***A = create_three_dim_float(760, 250, 760, "random");

	for (int b = 0; b < 246; b++)
	  for (int a = 0; a < 757; a++)
	  {
	    
	     A[a][b][a]=0.298;
	     A[a+3][b+4][a]=C[a][b]+C[a][b];
	  }

    return 0;
}