#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(380, 470, "ones");
	int *B = create_one_dim_int(120, "ones");
	int **D = create_two_dim_int(400, 440, "ones");
	int *C = create_one_dim_int(380, "ones");

	for (int a = 3; a < 117; a++)
	{
	  
	    D[a][a]=D[a][a-3]-25;
	  
	    C[a]=C[a+2]/48;
	  
	    B[a]=B[a+3]/A[a][a]-D[a][a];
	  
	    int var_a=D[a][a]-21;
	    int var_b=D[a-3][a-3]-20;
	  
	    D[a][a]=B[a]-C[a]*C[a];
	    A[a][a]=B[a]*D[a][a]-C[a];
	}

    return 0;
}