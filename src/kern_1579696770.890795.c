#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(640, 30, 430, "ones");
	int **C = create_two_dim_int(790, 700, "ones");
	int ***B = create_three_dim_int(420, 140, 480, "ones");

	for (int a = 0; a < 418; a++)
	{
	  
	    int var_a=B[a][a][a]+0;
	    int var_b=B[a][a+2][a+2]+4;
	}

    return 0;
}