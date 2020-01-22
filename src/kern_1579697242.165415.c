#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(580, 30, "ones");
	int *C = create_one_dim_int(120, "ones");
	int **A = create_two_dim_int(710, 980, "ones");

	for (int a = 2; a < 120; a++)
	{
	  
	    C[a]=C[a]+B[a][a];
	    B[a][a]=C[a-2]*A[a][a]/43;
	}

    return 0;
}