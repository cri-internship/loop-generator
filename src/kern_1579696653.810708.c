#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(680, 40, 930, "random");

	for (int c = 0; c < 930; c++)
	  for (int b = 0; b < 40; b++)
	    for (int a = 0; a < 679; a++)
	    {
	      
	      A[a][b][c]=39;
	      A[a+1][b][c]=5;
	    }

    return 0;
}