#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(900, 990, "random");
	int **A = create_two_dim_int(150, 590, "random");

	for (int a = 5; a < 895; a++)
	{
	  
	    B[a][a]=B[a+3][a+5]/27;
	  
	    B[a][a]=A[a][a];
	}

    return 0;
}