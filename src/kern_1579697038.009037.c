#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(260, "random");
	int **C = create_two_dim_int(350, 560, "random");
	int *B = create_one_dim_int(250, "random");

	for (int a = 5; a < 247; a++)
	{
	  
	    A[a]=A[a-5]*C[a][a]/B[a];
	  
	    B[a]=42;
	    B[a+3]=11;
	  
	    C[a][a]=A[a]/A[a];
	    C[a+1][a+5]=A[a]+B[a];
	  
	    A[a]=B[a]-C[a][a];
	}

    return 0;
}