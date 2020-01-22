#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(850, "zeros");
	int *B = create_one_dim_int(270, "zeros");
	int ***C = create_three_dim_int(480, 230, 920, "zeros");
	int *A = create_one_dim_int(780, "zeros");

	for (int a = 0; a < 265; a++)
	{
	  
	    B[a]=B[a+2]*21;
	  
	    B[a]=C[a][a][a]*A[a];
	  
	    int var_a=B[a]-7;
	    int var_b=B[a+4]-35;
	  
	    D[a]=A[a]*9-C[a][a][a]/B[a];
	    A[a]=A[a+5]/D[a]*C[a][a][a];
	  
	    B[a]=B[a]*D[a];
	    D[a]=B[a+5]/A[a]+14*C[a][a][a];
	}

    return 0;
}