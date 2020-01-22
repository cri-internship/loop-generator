#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(280, "ones");
	int ***C = create_three_dim_int(670, 720, 200, "ones");
	int *B = create_one_dim_int(640, "ones");

	for (int a = 5; a < 275; a++)
	{
	  
	    A[a]=A[a-4]*41;
	  
	    A[a]=A[a+5]*21;
	  
	    B[a]=A[a]/C[a][a][a];
	    B[a-5]=A[a];
	}

    return 0;
}