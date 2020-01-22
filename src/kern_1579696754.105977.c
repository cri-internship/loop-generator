#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(750, "random");
	int *B = create_one_dim_int(700, "random");
	int ***C = create_three_dim_int(870, 700, 500, "random");
	int *A = create_one_dim_int(60, "random");

	for (int a = 4; a < 60; a++)
	{
	  
	    A[a]=A[a-2]-17;
	  
	    A[a]=A[a-4]-41;
	  
	    D[a]=11;
	    D[a-2]=1;
	  
	    B[a]=A[a]+C[a][a][a]*D[a];
	    B[a+3]=C[a][a][a]+46/A[a];
	  
	    B[a]=A[a]/C[a][a][a];
	}

    return 0;
}