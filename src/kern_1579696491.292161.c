#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(260, 860, "random");
	int *C = create_one_dim_int(30, "random");
	int **B = create_two_dim_int(170, 160, "random");

	for (int a = 5; a < 28; a++)
	{
	  
	    A[a][a]=A[a+2][a+5]/46;
	  
	    B[a][a]=A[a][a]+C[a];
	    B[a-2][a-4]=C[a]-A[a][a];
	  
	    B[a][a]=C[a];
	  
	    C[a]=B[a][a];
	    C[a+2]=A[a][a]*B[a][a];
	  
	    A[a][a]=C[a];
	  
	    A[a][a]=C[a]*A[a][a]-B[a][a];
	    C[a]=C[a-4]+B[a][a];
	}

    return 0;
}