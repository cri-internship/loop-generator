#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(150, 770, 640, "zeros");

	for (int c = 4; c < 640; c++)
	  for (int b = 0; b < 770; b++)
	    for (int a = 4; a < 150; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b][c-4]/11;
	      
	      A[a][b][c]=A[a][b][c-4]/45;
	    }

    return 0;
}