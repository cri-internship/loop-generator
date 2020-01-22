#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(860, 140, "ones");
	int ***A = create_three_dim_int(440, 260, 1000, "ones");
	int **C = create_two_dim_int(290, 410, "ones");
	int *B = create_one_dim_int(410, "ones");

	for (int a = 4; a < 285; a++)
	{
	  
	    C[a][a]=C[a][a-4]*D[a][a]/B[a]-A[a][a][a];
	  
	    D[a][a]=D[a][a+4]*0;
	  
	    B[a]=D[a][a];
	    B[a+2]=26-C[a][a]+A[a][a][a];
	  
	    C[a][a]=35+A[a][a][a];
	  
	    int var_a=B[a]/42;
	    int var_b=B[a+4]-35;
	}

    return 0;
}