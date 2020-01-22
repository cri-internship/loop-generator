#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(780, 970, "ones");
	int **B = create_two_dim_int(680, 350, "ones");

	for (int a = 5; a < 780; a++)
	{
	  
	    int var_a=A[a][a]-29;
	    int var_b=A[a-1][a-5]/42;
	}

    return 0;
}