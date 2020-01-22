#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(270, 720, 590, "ones");
	int *A = create_one_dim_int(490, "ones");
	int *B = create_one_dim_int(880, "ones");

	for (int a = 5; a < 270; a++)
	{
	  
	    C[a][a][a]=C[a][a-5][a-1]/A[a];
	  
	    B[a]=B[a+4]+34;
	  
	    B[a]=A[a]*C[a][a][a];
	}

    return 0;
}