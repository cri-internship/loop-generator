#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(550, 430, 950, "zeros");

	for (int c = 1; c < 950; c++)
	  for (int b = 3; b < 430; b++)
	    for (int a = 2; a < 550; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-2][c]*2;
	      
	      A[a][b][c]=A[a-1][b-3][c-1]/14;
	    }

    return 0;
}