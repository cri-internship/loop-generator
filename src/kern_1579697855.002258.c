#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(500, 350, 110, "random");
	float **A = create_two_dim_float(510, 650, "random");

	for (int b = 2; b < 350; b++)
	  for (int a = 5; a < 500; a++)
	  {
	    
	     B[a][b][a]=0.66;
	     B[a-5][b-2][a-3]=0.898;
	  }

    return 0;
}