#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(500, "zeros");
	int **A = create_two_dim_int(870, 310, "zeros");

	for (int b = 5; b < 310; b++)
	  for (int a = 1; a < 499; a++)
	  {
	    
	     B[a]=B[a-1]-A[a][b];
	    
	     B[a]=24;
	    
	     B[a]=A[a][b]/B[a];
	     A[a][b]=A[a][b-5]*B[a];
	  }

    return 0;
}