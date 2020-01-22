#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(150, 30, 590, "ones");
	int **A = create_two_dim_int(290, 750, "ones");

	for (int c = 0; c < 746; c++)
	  for (int b = 0; b < 288; b++)
	    for (int a = 0; a < 288; a++)
	    {
	      
	      A[a][b]=B[a][b][c];
	      A[a+2][b+4]=49;
	    }

    return 0;
}