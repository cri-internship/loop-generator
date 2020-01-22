#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(300, 90, 310, "zeros");
	int **B = create_two_dim_int(420, 1000, "zeros");

	for (int c = 0; c < 310; c++)
	  for (int b = 0; b < 87; b++)
	    for (int a = 0; a < 296; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b+3][c]-B[a][b];
	    }

    return 0;
}