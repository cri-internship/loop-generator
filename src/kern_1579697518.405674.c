#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(290, 750, 790, "ones");
	int **B = create_two_dim_int(990, 20, "ones");

	for (int a = 4; a < 285; a++)
	{
	  
	    A[a][a][a]=A[a+5][a][a]+18;
	  
	    int var_a=A[a][a][a]+31;
	    int var_b=A[a-4][a-3][a-1]-34;
	}

    return 0;
}