#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(550, 410, "ones");
	int *A = create_one_dim_int(330, "ones");

	for (int a = 4; a < 327; a++)
	{
	  
	    A[a]=A[a-2]-27;
	  
	    B[a][a]=B[a][a-4]/39;
	  
	    int var_a=B[a][a]+50;
	    int var_b=B[a+3][a+5]*17;
	  
	    B[a][a]=A[a]*50;
	    A[a]=A[a+3]*B[a][a];
	}

    return 0;
}