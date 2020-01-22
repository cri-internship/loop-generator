#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(110, 990, 760, "random");

	for (int c = 1; c < 760; c++)
	  for (int b = 1; b < 990; b++)
	    for (int a = 5; a < 110; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-1][c-1]*0.628;
	      
	      A[a][b][c]=0.512;
	    }

    return 0;
}