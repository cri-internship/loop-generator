#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(540, 460, "ones");
	int ***B = create_three_dim_int(840, 420, 730, "ones");

	for (int c = 5; c < 730; c++)
	  for (int b = 3; b < 420; b++)
	    for (int a = 5; a < 840; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-3][c-2]/A[a][b];
	      
	      B[a][b][c]=B[a-4][b-1][c-2]+22;
	    }

    return 0;
}