#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(700, 930, 960, "ones");

	for (int c = 1; c < 959; c++)
	  for (int b = 0; b < 929; b++)
	    for (int a = 1; a < 697; a++)
	    {
	      
	      A[a][b][c]=A[a+3][b+1][c+1]+3;
	      
	      A[a][b][c]=21;
	    }

    return 0;
}