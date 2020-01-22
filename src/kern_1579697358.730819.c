#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(10, 190, "zeros");
	int *C = create_one_dim_int(60, "zeros");
	int *A = create_one_dim_int(430, "zeros");
	int ***D = create_three_dim_int(170, 220, 290, "zeros");
	int ***B = create_three_dim_int(100, 640, 500, "zeros");

	for (int a = 5; a < 96; a++)
	{
	  
	    B[a][a][a]=B[a-5][a-4][a-4]/19;
	  
	    B[a][a][a]=B[a+3][a][a+4]-D[a][a][a]+C[a]*E[a][a];
	}

    return 0;
}