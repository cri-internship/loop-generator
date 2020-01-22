#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(880, "ones");
	int ***B = create_three_dim_int(290, 260, 550, "ones");
	int **C = create_two_dim_int(800, 100, "ones");
	int *A = create_one_dim_int(930, "ones");

	for (int a = 4; a < 286; a++)
	{
	  
	    C[a][a]=C[a-2][a-4]-B[a][a][a]/A[a];
	  
	    C[a][a]=C[a-3][a-2]-19;
	  
	    B[a][a][a]=B[a+3][a+3][a+4]-D[a];
	  
	    D[a]=20;
	    D[a+5]=8;
	}

    return 0;
}