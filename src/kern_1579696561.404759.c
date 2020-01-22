#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(660, 800, 120, "ones");
	int *A = create_one_dim_int(540, "ones");
	int **C = create_two_dim_int(810, 160, "ones");

	for (int a = 2; a < 540; a++)
	{
	  
	    B[a][a][a]=27*C[a][a];
	    B[a+5][a+2][a+5]=C[a][a]/A[a];
	  
	    B[a][a][a]=A[a]/C[a][a];
	  
	    int var_a=A[a]*1;
	    int var_b=A[a-1]-20;
	}

    return 0;
}