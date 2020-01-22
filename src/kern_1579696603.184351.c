#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(800, 990, "random");
	int ***A = create_three_dim_int(490, 400, 800, "random");

	for (int c = 0; c < 797; c++)
	  for (int b = 0; b < 398; b++)
	    for (int a = 0; a < 485; a++)
	    {
	      
	      A[a][b][c]=A[a+5][b+2][c+3]-46;
	    }

    return 0;
}