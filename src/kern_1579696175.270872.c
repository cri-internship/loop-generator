#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(30, 940, "zeros");
	int *A = create_one_dim_int(60, "zeros");
	int **D = create_two_dim_int(730, 170, "zeros");
	int *E = create_one_dim_int(290, "zeros");
	int **B = create_two_dim_int(220, 180, "zeros");

	for (int a = 0; a < 27; a++)
	{
	  
	    C[a][a]=C[a+1][a+3]/D[a][a]-E[a]+B[a][a];
	}

    return 0;
}