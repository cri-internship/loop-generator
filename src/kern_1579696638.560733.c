#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(160, "zeros");
	int *B = create_one_dim_int(890, "zeros");
	int ***D = create_three_dim_int(280, 430, 100, "zeros");
	int *C = create_one_dim_int(150, "zeros");

	for (int a = 4; a < 145; a++)
	{
	  
	    B[a]=B[a-4]-3;
	  
	    C[a]=C[a+5]*15;
	  
	    B[a]=B[a+1]/D[a][a][a];
	  
	    A[a]=C[a]*B[a];
	    A[a-3]=B[a]-D[a][a][a];
	  
	    D[a][a][a]=44;
	    D[a+4][a+4][a+1]=4;
	  
	    int var_a=A[a]*27;
	    int var_b=A[a-4]-2;
	}

    return 0;
}