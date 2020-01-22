#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(570, 130, "ones");
	int **A = create_two_dim_int(910, 470, "ones");
	int ***D = create_three_dim_int(990, 250, 260, "ones");
	int ***C = create_three_dim_int(900, 640, 950, "ones");

	for (int a = 5; a < 900; a++)
	{
	  
	    D[a][a][a]=D[a-5][a-1][a-5]/C[a][a][a]+B[a][a]-A[a][a];
	  
	    A[a][a]=32+D[a][a][a];
	    A[a-3][a-5]=B[a][a]+C[a][a][a];
	  
	    C[a][a][a]=16;
	    C[a-4][a-5][a-1]=16;
	  
	    C[a][a][a]=D[a][a][a]-29+B[a][a]/A[a][a];
	    D[a][a][a]=D[a+5][a+5][a+4]+A[a][a];
	}

    return 0;
}