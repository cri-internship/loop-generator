#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(160, 810, 230, "zeros");
	int **C = create_two_dim_int(110, 70, "zeros");
	int *B = create_one_dim_int(440, "zeros");

	for (int a = 3; a < 105; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-3][a]+B[a]*C[a][a];
	  
	    C[a][a]=C[a+5][a+4]+14;
	  
	    C[a][a]=A[a][a][a];
	}

    return 0;
}