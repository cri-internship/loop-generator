#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(470, 860, 980, "ones");
	int **B = create_two_dim_int(780, 330, "ones");
	int **D = create_two_dim_int(790, 270, "ones");
	int ***A = create_three_dim_int(380, 510, 960, "ones");

	for (int c = 2; c < 980; c++)
	  for (int b = 4; b < 860; b++)
	    for (int a = 3; a < 470; a++)
	    {
	      
	      C[a][b][c]=46;
	      C[a-3][b-4][c-2]=19;
	    }

    return 0;
}