#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(910, "random");
	int **C = create_two_dim_int(740, 730, "random");
	int **A = create_two_dim_int(470, 900, "random");

	for (int a = 4; a < 470; a++)
	{
	  
	    A[a][a]=A[a-4][a-3]/41;
	  
	    C[a][a]=C[a+4][a+3]+A[a][a]/2;
	  
	    B[a]=C[a][a];
	    B[a+2]=A[a][a]+C[a][a];
	  
	    C[a][a]=46;
	}

    return 0;
}