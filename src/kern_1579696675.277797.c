#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(770, 910, "random");
	int *B = create_one_dim_int(50, "random");
	int *A = create_one_dim_int(170, "random");

	for (int a = 4; a < 48; a++)
	{
	  
	    A[a]=A[a-4]*33;
	  
	    B[a]=B[a+2]+C[a][a]*A[a];
	  
	    C[a][a]=35;
	    C[a+2][a+4]=20;
	  
	    A[a]=B[a]-A[a]+C[a][a];
	    C[a][a]=B[a-3]*A[a];
	  
	    int var_a=C[a][a]-50;
	    int var_b=C[a+1][a+5]-22;
	}

    return 0;
}