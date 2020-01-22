#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(780, 140, "random");
	int ***A = create_three_dim_int(820, 830, 170, "random");

	for (int a = 4; a < 777; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-3][a-4]*21;
	  
	    A[a][a][a]=A[a-4][a][a-3]/B[a][a];
	  
	    A[a][a][a]=A[a+3][a+1][a+2]/B[a][a];
	  
	    B[a][a]=A[a][a][a];
	    B[a+1][a+3]=A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]/B[a][a];
	    B[a][a]=A[a+2][a+5][a+3]+24;
	  
	    int var_a=B[a][a]/21;
	    int var_b=B[a+2][a+3]/27;
	}

    return 0;
}