#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(410, 500, "random");
	float ***B = create_three_dim_float(320, 440, 170, "random");

	for (int b = 1; b < 440; b++)
	  for (int a = 5; a < 320; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-1][a-5]+A[a][b];
	  }

    return 0;
}