#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(850, "zeros");
	int **B = create_two_dim_int(80, 970, "zeros");
	int ***A = create_three_dim_int(1000, 140, 10, "zeros");
	int **D = create_two_dim_int(160, 750, "zeros");
	int *C = create_one_dim_int(430, "zeros");

	for (int a = 4; a < 80; a++)
	{
	  
	    B[a][a]=B[a-3][a-4]+E[a]-19*C[a];
	  
	    E[a]=E[a+2]/D[a][a];
	  
	    A[a][a][a]=B[a][a]*D[a][a];
	    A[a-1][a-3][a-4]=C[a]*29/D[a][a]+E[a];
	  
	    E[a]=D[a][a]/C[a];
	}

    return 0;
}