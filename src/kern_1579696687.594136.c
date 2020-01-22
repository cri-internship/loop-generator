#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(170, 840, 830, "random");
	int *A = create_one_dim_int(580, "random");
	int *C = create_one_dim_int(510, "random");

	for (int a = 2; a < 165; a++)
	{
	  
	    A[a]=A[a-2]*B[a][a][a]+50;
	  
	    B[a][a][a]=13;
	    B[a+4][a+1][a+5]=29;
	  
	    C[a]=48;
	    C[a+5]=45;
	  
	    B[a][a][a]=C[a]/A[a];
	    C[a]=C[a]*B[a][a][a]+A[a];
	}

    return 0;
}