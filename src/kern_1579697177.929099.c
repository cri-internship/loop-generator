#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(700, 670, "zeros");
	int **C = create_two_dim_int(510, 870, "zeros");
	int **E = create_two_dim_int(30, 630, "zeros");
	int *B = create_one_dim_int(220, "zeros");
	int *A = create_one_dim_int(410, "zeros");

	for (int a = 0; a < 405; a++)
	{
	  
	    D[a][a]=E[a][a];
	    A[a]=D[a][a]-A[a]/B[a]+C[a][a]*B[a];
	  
	    D[a][a]=D[a+1][a+3]-B[a]/A[a]*C[a][a]+E[a][a];
	  
	    A[a]=A[a+3]/47;
	  
	    C[a][a]=C[a][a+2]-17;
	}

    return 0;
}