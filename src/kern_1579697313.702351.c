#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(950, "random");
	int **A = create_two_dim_int(650, 710, "random");
	int *B = create_one_dim_int(690, "random");
	int *C = create_one_dim_int(310, "random");
	int *E = create_one_dim_int(60, "random");

	for (int a = 5; a < 310; a++)
	{
	  
	    C[a]=C[a-5]/B[a];
	}

    return 0;
}