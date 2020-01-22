#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(950, 810, "ones");
	int ***E = create_three_dim_int(900, 690, 980, "ones");
	int **B = create_two_dim_int(730, 490, "ones");
	int *C = create_one_dim_int(740, "ones");
	int **D = create_two_dim_int(870, 340, "ones");

	for (int a = 5; a < 870; a++)
	{
	  
	    E[a][a][a]=B[a][a];
	    E[a+2][a+1][a+3]=C[a]*D[a][a]/A[a][a];
	  
	    int var_a=D[a][a]+36;
	    int var_b=D[a-5][a-2]*27;
	}

    return 0;
}