#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(580, 600, 480, "random");
	int *C = create_one_dim_int(300, "random");
	int *B = create_one_dim_int(790, "random");

	for (int a = 4; a < 296; a++)
	{
	  
	    A[a][a][a]=A[a-4][a][a-3]+B[a];
	  
	    C[a]=A[a][a][a]*B[a];
	    C[a-2]=B[a];
	  
	    C[a]=25;
	  
	    C[a]=A[a][a][a]-C[a]/C[a];
	    A[a][a][a]=A[a-2][a-1][a-3]/34;
	}

    return 0;
}