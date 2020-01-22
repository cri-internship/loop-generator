#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(730, 140, 700, "random");

	for (int c = 5; c < 700; c++)
	  for (int b = 3; b < 140; b++)
	    for (int a = 0; a < 730; a++)
	    {
	      
	      A[a][b][c]=A[a][b-3][c-5]+0.976;
	    }

    return 0;
}