#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(810, "zeros");
	int ***D = create_three_dim_int(820, 380, 550, "zeros");
	int **A = create_two_dim_int(210, 10, "zeros");
	int **B = create_two_dim_int(740, 150, "zeros");

	for (int a = 5; a < 210; a++)
	{
	  
	    B[a][a]=B[a+4][a+3]+A[a][a]*C[a]/D[a][a][a];
	  
	    C[a]=23;
	    C[a+1]=31;
	  
	    D[a][a][a]=A[a][a]-B[a][a];
	    B[a][a]=A[a-5][a-5]*C[a]-B[a][a]+D[a][a][a];
	  
	    int var_a=C[a]/34;
	    int var_b=C[a+1]+26;
	  
	    A[a][a]=D[a][a][a]*A[a][a];
	    C[a]=D[a+4][a+5][a+3]*B[a][a]+A[a][a]/C[a];
	}

    return 0;
}