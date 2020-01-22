#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(1000, 250, "ones");
	int **A = create_two_dim_int(620, 810, "ones");
	int **B = create_two_dim_int(170, 90, "ones");

	for (int a = 5; a < 165; a++)
	{
	  
	    A[a][a]=A[a-4][a-4]*C[a][a]/11;
	  
	    B[a][a]=B[a-4][a-5]+A[a][a]/C[a][a];
	  
	    B[a][a]=B[a+5][a+3]/35;
	  
	    C[a][a]=B[a][a]+A[a][a];
	    C[a][a+1]=A[a][a]+B[a][a];
	  
	    int var_a=A[a][a]+27;
	    int var_b=A[a-1][a]+28;
	  
	    A[a][a]=C[a][a]*18;
	    B[a][a]=C[a-3][a]*B[a][a]-A[a][a];
	}

    return 0;
}