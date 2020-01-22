#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(780, 850, "random");
	float ***A = create_three_dim_float(190, 60, 110, "random");

	for (int b = 4; b < 60; b++)
	  for (int a = 2; a < 190; a++)
	  {
	    
	     A[a][b][a]=0.065;
	     A[a-2][b-4][a]=0.124;
	  }

    return 0;
}