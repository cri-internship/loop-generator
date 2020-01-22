#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(920, 640, "zeros");
	int ***B = create_three_dim_int(70, 900, 900, "zeros");
	int *C = create_one_dim_int(720, "zeros");
	int ***D = create_three_dim_int(120, 180, 770, "zeros");

	for (int a = 5; a < 116; a++)
	{
	  
	    A[a][a]=A[a][a+5]*C[a]-D[a][a][a]/B[a][a][a];
	  
	    int var_a=C[a]+43;
	    int var_b=C[a-5]*25;
	  
	    A[a][a]=D[a][a][a]*A[a][a]+C[a]/B[a][a][a];
	    C[a]=D[a-4][a-1][a]-C[a]*B[a][a][a];
	  
	    D[a][a][a]=D[a][a][a]+A[a][a]-B[a][a][a]*C[a];
	    B[a][a][a]=D[a+1][a+4][a+4]/C[a]*A[a][a];
	}

    return 0;
}