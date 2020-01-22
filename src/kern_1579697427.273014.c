#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(220, 610, "random");
	int *A = create_one_dim_int(700, "random");
	int **B = create_two_dim_int(820, 480, "random");
	int **D = create_two_dim_int(790, 990, "random");
	int *C = create_one_dim_int(260, "random");

	for (int b = 2; b < 480; b++)
	  for (int a = 4; a < 696; a++)
	  {
	    
	     D[a][b]=D[a-4][b-2]/11;
	    
	     B[a][b]=B[a-4][b-2]/32;
	    
	     A[a]=A[a+4]+33;
	  }

    return 0;
}