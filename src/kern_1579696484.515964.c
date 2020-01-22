#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(930, 140, 760, "ones");

	for (int c = 3; c < 760; c++)
	  for (int b = 5; b < 140; b++)
	    for (int a = 3; a < 930; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-4][c-3]*0.847;
	      
	      A[a][b][c]=0.331;
	    }

    return 0;
}