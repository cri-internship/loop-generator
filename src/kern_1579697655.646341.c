#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(140, 640, 370, "zeros");

	for (int c = 2; c < 370; c++)
	  for (int b = 0; b < 640; b++)
	    for (int a = 0; a < 140; a++)
	    {
	      
	      A[a][b][c]=A[a][b][c-2]-4;
	    }

    return 0;
}