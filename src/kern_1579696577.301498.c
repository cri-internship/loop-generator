#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(60, 920, 210, "ones");
	int ***C = create_three_dim_int(950, 920, 60, "ones");
	int ***A = create_three_dim_int(680, 840, 90, "ones");
	int *D = create_one_dim_int(390, "ones");

	for (int a = 2; a < 387; a++)
	{
	  
	    D[a]=D[a-2]+3;
	  
	    int var_a=D[a]+2;
	    int var_b=D[a+3]/42;
	  
	    A[a][a][a]=D[a]+C[a][a][a]/A[a][a][a];
	    D[a]=D[a+2]-B[a][a][a];
	}

    return 0;
}