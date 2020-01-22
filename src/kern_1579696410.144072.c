#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(920, "random");
	int **B = create_two_dim_int(70, 130, "random");
	int *C = create_one_dim_int(180, "random");
	int **D = create_two_dim_int(590, 770, "random");

	for (int a = 0; a < 176; a++)
	{
	  
	    C[a]=42;
	    C[a+4]=49;
	}

    return 0;
}