#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(270, 350, "random");
	int **D = create_two_dim_int(430, 900, "random");
	int ***A = create_three_dim_int(270, 480, 330, "random");
	int *C = create_one_dim_int(810, "random");

	for (int a = 0; a < 269; a++)
	{
	  
	    int var_a=B[a][a]*3;
	    int var_b=B[a+1][a+1]-23;
	}

    return 0;
}