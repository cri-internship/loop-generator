#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(750, 700, "zeros");
	int ***A = create_three_dim_int(390, 960, 140, "zeros");
	int **D = create_two_dim_int(750, 700, "zeros");
	int *C = create_one_dim_int(70, "zeros");
	int *E = create_one_dim_int(170, "zeros");

	for (int a = 5; a < 385; a++)
	{
	  
	    A[a][a][a]=A[a-4][a][a]+9;
	  
	    A[a][a][a]=A[a][a][a-5]*42/E[a]+C[a];
	  
	    A[a][a][a]=A[a+1][a+5][a+1]/B[a][a]-E[a]*D[a][a]+C[a];
	  
	    B[a][a]=B[a+4][a]/A[a][a][a]*A[a][a][a]-C[a]+D[a][a];
	  
	    B[a][a]=B[a+2][a]/41;
	}

    return 0;
}