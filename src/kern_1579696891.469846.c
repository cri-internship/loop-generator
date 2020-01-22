#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(640, "ones");
	int ***D = create_three_dim_int(350, 580, 250, "ones");
	int **B = create_two_dim_int(990, 80, "ones");
	int **A = create_two_dim_int(920, 980, "ones");

	for (int a = 4; a < 350; a++)
	{
	  
	    C[a]=25;
	    C[a+2]=46;
	  
	    A[a][a]=B[a][a];
	    A[a-3][a-3]=5;
	  
	    D[a][a][a]=C[a]+A[a][a]/D[a][a][a];
	    A[a][a]=C[a+1]-A[a][a]*D[a][a][a];
	  
	    int var_a=D[a][a][a]/13;
	    int var_b=D[a-1][a-3][a-4]-11;
	}

    return 0;
}