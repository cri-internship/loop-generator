#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(680, 340, "random");
	int **B = create_two_dim_int(100, 620, "random");

	for (int a = 5; a < 100; a++)
	{
	  
	    A[a][a]=A[a-1][a-4]/B[a][a];
	  
	    A[a][a]=A[a-3][a-4]-26;
	  
	    B[a][a]=B[a-3][a-4]+11;
	  
	    A[a][a]=A[a][a]/11;
	    B[a][a]=A[a+1][a+2]/B[a][a];
	}

    return 0;
}