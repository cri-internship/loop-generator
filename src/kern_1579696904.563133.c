#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(810, 220, "ones");
	int *D = create_one_dim_int(700, "ones");
	int *B = create_one_dim_int(890, "ones");
	int **A = create_two_dim_int(710, 640, "ones");

	for (int a = 3; a < 890; a++)
	{
	  
	    int var_a=B[a]-11;
	    int var_b=B[a-3]-19;
	}

    return 0;
}