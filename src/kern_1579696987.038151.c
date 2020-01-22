#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(640, 550, 940, "ones");
	int **D = create_two_dim_int(950, 740, "ones");
	int *A = create_one_dim_int(550, "ones");
	int *C = create_one_dim_int(450, "ones");

	for (int a = 5; a < 450; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-4][a-2]-12+A[a]*C[a];
	  
	    D[a][a]=D[a+3][a]/18;
	  
	    C[a]=B[a][a][a]*B[a][a][a]-D[a][a];
	    C[a-5]=B[a][a][a];
	  
	    int var_a=B[a][a][a]/7;
	    int var_b=B[a+4][a+1][a+1]-29;
	  
	    A[a]=A[a]-B[a][a][a]*D[a][a];
	    B[a][a][a]=A[a+3]*D[a][a];
	}

    return 0;
}