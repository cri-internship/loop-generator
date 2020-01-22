#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(700, "ones");
	int **B = create_two_dim_int(410, 830, "ones");

	for (int a = 5; a < 410; a++)
	{
	  
	    A[a]=A[a-4]/47;
	  
	    A[a]=A[a+3]/B[a][a];
	  
	    B[a][a]=39;
	    B[a-1][a-5]=1;
	}

    return 0;
}