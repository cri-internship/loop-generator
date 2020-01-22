#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(240, 950, 650, "random");
	int *A = create_one_dim_int(260, "random");
	int *B = create_one_dim_int(730, "random");

	for (int a = 4; a < 236; a++)
	{
	  
	    A[a]=A[a-3]-C[a][a][a]+B[a];
	  
	    A[a]=7;
	  
	    B[a]=B[a+2]/A[a];
	  
	    B[a]=B[a+3]-41;
	  
	    C[a][a][a]=27;
	    C[a+4][a+3][a+3]=47;
	}

    return 0;
}