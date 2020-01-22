#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(790, 140, 170, "zeros");
	int *B = create_one_dim_int(620, "zeros");

	for (int a = 5; a < 617; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-3][a-5]-B[a];
	  
	    B[a]=B[a+3]-A[a][a][a];
	  
	    A[a][a][a]=25;
	}

    return 0;
}