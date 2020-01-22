#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(860, "ones");
	int **A = create_two_dim_int(910, 300, "ones");
	int **C = create_two_dim_int(200, 160, "ones");

	for (int a = 5; a < 200; a++)
	{
	  
	    C[a][a]=C[a-5][a-2]-19;
	  
	    int var_a=B[a]*9;
	    int var_b=B[a+2]-27;
	}

    return 0;
}