#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(200, 750, "random");
	int *C = create_one_dim_int(310, "random");
	int **B = create_two_dim_int(470, 60, "random");

	for (int b = 4; b < 750; b++)
	  for (int a = 2; a < 200; a++)
	  {
	    
	     A[a][b]=A[a-2][b-4]/38;
	    
	     C[a]=A[a][b];
	     C[a-1]=B[a][b]-B[a][b];
	  }

    return 0;
}