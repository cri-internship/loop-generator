#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(860, 650, "zeros");
	int **A = create_two_dim_int(710, 710, "zeros");
	int **D = create_two_dim_int(360, 570, "zeros");
	int *C = create_one_dim_int(780, "zeros");

	for (int a = 4; a < 708; a++)
	{
	  
	    A[a][a]=A[a-3][a-4]*35;
	  
	    C[a]=C[a+2]-14;
	  
	    B[a][a]=A[a][a]*C[a]+D[a][a];
	    D[a][a]=A[a+2][a+1]-B[a][a];
	}

    return 0;
}