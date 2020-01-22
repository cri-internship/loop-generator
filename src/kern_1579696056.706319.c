#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(240, 590, "random");
	int ***C = create_three_dim_int(260, 470, 90, "random");
	int *B = create_one_dim_int(930, "random");

	for (int a = 1; a < 240; a++)
	{
	  
	    A[a][a]=A[a][a-1]+C[a][a][a]*B[a];
	  
	    B[a]=B[a+2]+2;
	}

    return 0;
}