#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(90, 890, 790, "ones");

	for (int b = 3; b < 890; b++)
	  for (int a = 3; a < 90; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-3][a-3]/0.955;
	  }

    return 0;
}