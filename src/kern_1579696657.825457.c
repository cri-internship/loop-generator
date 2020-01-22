#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(770, "ones");
	int **C = create_two_dim_int(100, 480, "ones");
	int **A = create_two_dim_int(60, 400, "ones");

	for (int a = 0; a < 770; a++)
	{
	  
	    int var_a=B[a]/22;
	    B[a]=50;
	}

    return 0;
}