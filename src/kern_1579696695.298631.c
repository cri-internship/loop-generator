#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(600, "zeros");
	int **B = create_two_dim_int(180, 680, "zeros");
	int ***E = create_three_dim_int(920, 500, 700, "zeros");
	int ***D = create_three_dim_int(440, 300, 660, "zeros");
	int *A = create_one_dim_int(650, "zeros");

	for (int a = 3; a < 435; a++)
	{
	  
	    D[a][a][a]=D[a+2][a+1][a+5]*C[a];
	  
	    int var_a=C[a]/43;
	    int var_b=C[a-3]+34;
	  
	    D[a][a][a]=A[a]*B[a][a]-E[a][a][a];
	    A[a]=A[a-1]+D[a][a][a]/C[a]-B[a][a];
	}

    return 0;
}