#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(710, 540, 790, "zeros");
	int *A = create_one_dim_int(840, "zeros");

	for (int c = 0; c < 790; c++)
	  for (int b = 2; b < 540; b++)
	    for (int a = 0; a < 710; a++)
	    {
	      
	      B[a][b][c]=A[a];
	      B[a][b-2][c]=A[a];
	    }

    return 0;
}