#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(310, 180, 310, "ones");
	int **A = create_two_dim_int(30, 320, "ones");
	int **B = create_two_dim_int(410, 240, "ones");
	int *C = create_one_dim_int(180, "ones");

	for (int b = 1; b < 180; b++)
	  for (int a = 3; a < 30; a++)
	  {
	    
	     D[a][b][a]=D[a-2][b][a-2]-B[a][b];
	    
	     A[a][b]=A[a-3][b-1]*49;
	  }

    return 0;
}