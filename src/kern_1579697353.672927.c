#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(320, 780, "zeros");

	for (int c = 3; c < 780; c++)
	  for (int b = 2; b < 320; b++)
	    for (int a = 2; a < 320; a++)
	    {
	      
	      A[a][b]=26;
	      A[a-2][b-3]=14;
	    }

    return 0;
}