#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(500, 510, "ones");
	int ***B = create_three_dim_int(630, 470, 300, "ones");

	for (int b = 1; b < 469; b++)
	  for (int a = 4; a < 626; a++)
	  {
	    
	     B[a][b][a]=A[a][b];
	     B[a-1][b-1][a-4]=A[a][b];
	    
	     B[a][b][a]=A[a][b];
	  }

    return 0;
}