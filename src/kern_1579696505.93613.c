#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(120, 570, 930, "random");
	int *A = create_one_dim_int(870, "random");

	for (int b = 2; b < 570; b++)
	  for (int a = 5; a < 120; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-2][a]+A[a];
	  }

    return 0;
}