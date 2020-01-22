#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(590, "zeros");
	int **B = create_two_dim_int(810, 450, "zeros");

	for (int a = 4; a < 588; a++)
	{
	  
	    B[a][a]=13;
	    float  var_a=B[a][a]-37;
	  
	    B[a][a]=B[a-3][a]/30;
	  
	    A[a]=26;
	    float  var_b=A[a]+7;
	  
	    A[a]=42;
	  
	    A[a]=B[a][a]+A[a];
	    B[a][a]=B[a-1][a]*A[a];
	  
	    A[a]=B[a][a]*A[a];
	    B[a][a]=B[a+4][a+4]-A[a];
	}

    return 0;
}