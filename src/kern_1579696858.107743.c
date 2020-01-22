#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(770, "zeros");
	int ***A = create_three_dim_int(920, 310, 40, "zeros");

	for (int b = 3; b < 310; b++)
	  for (int a = 4; a < 770; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-3][a]-0;
	    
	     A[a][b][a]=B[a]+A[a][b][a];
	     B[a]=B[a-4]+A[a][b][a];
	  }

    return 0;
}