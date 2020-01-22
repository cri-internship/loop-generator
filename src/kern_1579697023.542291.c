#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(230, 770, "ones");
	int ***D = create_three_dim_int(860, 660, 50, "ones");
	int ***C = create_three_dim_int(400, 110, 450, "ones");
	int **A = create_two_dim_int(380, 850, "ones");

	for (int a = 0; a < 226; a++)
	{
	  
	    B[a][a]=49;
	    B[a+4][a+2]=38;
	}

    return 0;
}