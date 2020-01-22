#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(310, 280, "zeros");
	int **B = create_two_dim_int(810, 760, "zeros");
	int ***A = create_three_dim_int(760, 590, 340, "zeros");
	int *E = create_one_dim_int(780, "zeros");
	int *C = create_one_dim_int(230, "zeros");

	for (int a = 2; a < 225; a++)
	{
	  
	    D[a][a]=D[a+3][a+1]/C[a]-B[a][a];
	  
	    D[a][a]=B[a][a]+12/E[a];
	    C[a]=B[a+5][a+1]/A[a][a][a]*12;
	  
	    E[a]=D[a][a]/A[a][a][a]-C[a]+B[a][a]*E[a];
	    A[a][a][a]=D[a+1][a+5]/A[a][a][a]+B[a][a]*E[a]-C[a];
	  
	    B[a][a]=B[a][a]*D[a][a];
	    D[a][a]=B[a-1][a-2]-C[a];
	  
	    int var_a=C[a]-34;
	    int var_b=C[a+5]+50;
	}

    return 0;
}