#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(630, 970, 360, "random");

	for (int c = 0; c < 355; c++)
	  for (int b = 0; b < 965; b++)
	    for (int a = 0; a < 628; a++)
	    {
	      
	      A[a][b][c]=29;
	      A[a+1][b+5][c+1]=49;
	      
	      A[a][b][c]=10;
	    }

    return 0;
}