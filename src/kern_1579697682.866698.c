#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(370, "zeros");
	int **A = create_two_dim_int(750, 850, "zeros");

	for (int c = 2; c < 850; c++)
	  for (int b = 4; b < 370; b++)
	    for (int a = 4; a < 370; a++)
	    {
	      
	      A[a][b]=A[a-4][b-2]+33;
	      
	      B[a]=A[a][b];
	      B[a-4]=A[a][b];
	      
	      B[a]=31;
	    }

    return 0;
}