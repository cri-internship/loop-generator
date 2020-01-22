#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(490, 690, "zeros");
	int *A = create_one_dim_int(370, "zeros");
	int **B = create_two_dim_int(550, 390, "zeros");

	for (int a = 1; a < 488; a++)
	{
	  
	    C[a][a]=C[a+2][a+2]+B[a][a];
	  
	    C[a][a]=9;
	  
	    int var_a=B[a][a]+2;
	    int var_b=B[a+1][a+3]*4;
	}

    return 0;
}