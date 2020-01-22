#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(1000, 950, "zeros");
	int *C = create_one_dim_int(950, "zeros");
	int ***B = create_three_dim_int(330, 10, 270, "zeros");
	int **D = create_two_dim_int(850, 320, "zeros");

	for (int a = 3; a < 1000; a++)
	{
	  
	    A[a][a]=38/D[a][a]-B[a][a][a];
	    A[a-3][a]=C[a]+D[a][a]*B[a][a][a];
	}

    return 0;
}