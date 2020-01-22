#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(580, 170, "ones");
	int **E = create_two_dim_int(900, 20, "ones");
	int ***B = create_three_dim_int(200, 750, 880, "ones");
	int **C = create_two_dim_int(260, 190, "ones");
	int **A = create_two_dim_int(860, 640, "ones");

	for (int a = 5; a < 200; a++)
	{
	  
	    B[a][a][a]=B[a][a-3][a-5]+D[a][a]-E[a][a]*A[a][a];
	  
	    A[a][a]=A[a-5][a-2]+3*B[a][a][a];
	  
	    D[a][a]=18/A[a][a];
	    D[a-4][a-3]=E[a][a]/A[a][a]*B[a][a][a]-C[a][a];
	}

    return 0;
}