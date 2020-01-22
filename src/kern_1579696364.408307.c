#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(310, 820, 360, "ones");

	for (int a = 4; a < 310; a++)
	{
	  
	    int var_a=A[a][a][a]-48;
	    int var_b=A[a-3][a-4][a]+11;
	}

    return 0;
}