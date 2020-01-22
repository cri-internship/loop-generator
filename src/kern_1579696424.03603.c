#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(710, "ones");
	int *A = create_one_dim_int(640, "ones");
	int **E = create_two_dim_int(870, 70, "ones");
	int *D = create_one_dim_int(720, "ones");
	int *B = create_one_dim_int(990, "ones");

	for (int a = 0; a < 710; a++)
	{
	  
	    C[a]=10;
	    C[a]=9;
	  
	    B[a]=41/C[a];
	    B[a+4]=D[a]-E[a][a];
	}

    return 0;
}