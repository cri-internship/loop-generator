#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(330, 830, 440, "ones");

	for (int c = 0; c < 440; c++)
	  for (int b = 0; b < 830; b++)
	    for (int a = 0; a < 328; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b][c]*8;
	    }

    return 0;
}