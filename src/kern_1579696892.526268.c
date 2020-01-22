#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(410, 110, 400, "ones");

	for (int b = 5; b < 110; b++)
	  for (int a = 4; a < 410; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-5][a-3]/0.255;
	    
	     A[a][b][a]=A[a-1][b-3][a-4]-0.236;
	  }

    return 0;
}