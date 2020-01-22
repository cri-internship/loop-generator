#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(530, 40, "ones");
	int *E = create_one_dim_int(260, "ones");
	int ***C = create_three_dim_int(940, 970, 20, "ones");
	int **B = create_two_dim_int(670, 40, "ones");
	int **A = create_two_dim_int(700, 250, "ones");

	for (int a = 5; a < 260; a++)
	{
	  
	    B[a][a]=B[a-2][a-2]*8;
	  
	    E[a]=E[a-2]+2;
	  
	    A[a][a]=A[a-2][a]/E[a];
	  
	    D[a][a]=D[a+1][a+5]-B[a][a]/16;
	  
	    D[a][a]=16;
	}

    return 0;
}