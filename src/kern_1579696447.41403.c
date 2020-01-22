#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(760, 110, 330, "ones");
	float **B = create_two_dim_float(790, 510, "ones");

	for (int b = 3; b < 110; b++)
	  for (int a = 1; a < 760; a++)
	  {
	    
	     A[a][b][a]=0.533;
	     A[a-1][b-3][a]=0.684;
	  }

    return 0;
}