#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(400, 590, "random");
	int **A = create_two_dim_int(860, 860, "random");

	for (int a = 5; a < 395; a++)
	{
	  
	    A[a][a]=A[a-3][a-1]*B[a][a];
	  
	    B[a][a]=B[a+5][a+1]-34;
	  
	    B[a][a]=B[a][a+2]*A[a][a];
	  
	    int var_a=A[a][a]+8;
	    int var_b=A[a-5][a-2]*11;
	}

    return 0;
}