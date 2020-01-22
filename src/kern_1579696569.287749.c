#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(100, 930, "zeros");
	int *A = create_one_dim_int(120, "zeros");

	for (int a = 4; a < 97; a++)
	{
	  
	    B[a][a]=B[a-1][a-2]/A[a];
	  
	    A[a]=A[a]+B[a][a];
	    A[a]=28;
	  
	    B[a][a]=B[a+3][a+2]-23;
	  
	    B[a][a]=A[a]/B[a][a];
	    A[a]=47;
	  
	    A[a]=B[a][a]*0;
	    A[a]=B[a-4][a-2]/33;
	  
	    B[a][a]=A[a]/B[a][a];
	    A[a]=A[a-4]*B[a][a];
	}

    return 0;
}