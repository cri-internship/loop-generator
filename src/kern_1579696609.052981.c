#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(780, "random");
	int *A = create_one_dim_int(930, "random");
	int ***B = create_three_dim_int(810, 310, 320, "random");

	for (int a = 0; a < 776; a++)
	{
	  
	    C[a]=C[a+4]+A[a]/B[a][a][a];
	  
	    A[a]=C[a];
	    A[a+2]=C[a];
	}

    return 0;
}