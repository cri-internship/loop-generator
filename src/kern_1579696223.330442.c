#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(680, "zeros");
	int **A = create_two_dim_int(700, 950, "zeros");

	for (int c = 1; c < 950; c++)
	  for (int b = 4; b < 675; b++)
	    for (int a = 4; a < 675; a++)
	    {
	      
	      A[a][b]=A[a-4][b-1]+6;
	      
	      B[a]=B[a-1]/14;
	      
	      B[a]=B[a+5]/A[a][b];
	    }

    return 0;
}