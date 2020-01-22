#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(320, 400, "ones");
	int *C = create_one_dim_int(440, "ones");
	int *A = create_one_dim_int(390, "ones");

	for (int a = 5; a < 320; a++)
	{
	  
	    C[a]=C[a-5]*B[a][a]-A[a];
	  
	    B[a][a]=B[a-1][a-3]+42;
	  
	    C[a]=C[a-3]*1;
	  
	    A[a]=A[a+5]-1;
	  
	    C[a]=C[a+2]+B[a][a]/A[a];
	}

    return 0;
}