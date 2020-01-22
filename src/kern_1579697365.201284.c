#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(150, 610, "ones");
	int **E = create_two_dim_int(600, 200, "ones");
	int *A = create_one_dim_int(650, "ones");
	int *C = create_one_dim_int(340, "ones");
	int **D = create_two_dim_int(720, 460, "ones");

	for (int a = 0; a < 650; a++)
	{
	  
	    E[a][a]=A[a]-E[a][a]*D[a][a]/B[a][a]+C[a];
	    A[a]=D[a][a]/B[a][a]+E[a][a];
	  
	    D[a][a]=D[a][a+3]/4;
	}

    return 0;
}