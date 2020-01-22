#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(960, "random");
	int **D = create_two_dim_int(730, 830, "random");
	int *C = create_one_dim_int(140, "random");
	int **A = create_two_dim_int(840, 380, "random");

	for (int a = 0; a < 728; a++)
	{
	  
	    D[a][a]=D[a+1][a+2]-C[a]+B[a];
	}

    return 0;
}