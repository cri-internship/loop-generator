#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(360, 180, 10, "ones");
	int **C = create_two_dim_int(740, 780, "ones");
	int ***A = create_three_dim_int(250, 160, 860, "ones");

	for (int a = 5; a < 250; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-5][a-2]-38;
	}

    return 0;
}