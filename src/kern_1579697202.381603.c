#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(790, 60, 220, "random");
	int ***A = create_three_dim_int(600, 50, 20, "random");
	int ***B = create_three_dim_int(650, 1000, 30, "random");
	int **C = create_two_dim_int(670, 210, "random");

	for (int a = 5; a < 596; a++)
	{
	  
	    C[a][a]=C[a-5][a-5]/A[a][a][a]*21+D[a][a][a];
	  
	    A[a][a][a]=A[a][a-2][a-5]/20;
	  
	    C[a][a]=C[a+2][a+4]/A[a][a][a];
	  
	    C[a][a]=C[a+1][a+2]/36;
	  
	    A[a][a][a]=A[a][a][a]*B[a][a][a]/C[a][a]+D[a][a][a];
	    D[a][a][a]=A[a+1][a+4][a]-D[a][a][a]+B[a][a][a]*C[a][a];
	  
	    int var_a=B[a][a][a]*2;
	    int var_b=B[a+4][a+3][a+2]*33;
	}

    return 0;
}