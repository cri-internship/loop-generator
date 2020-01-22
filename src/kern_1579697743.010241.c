#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(920, "ones");
	int **B = create_two_dim_int(140, 340, "ones");
	int **A = create_two_dim_int(490, 350, "ones");

	for (int a = 5; a < 140; a++)
	{
	  
	    B[a][a]=B[a-5][a-1]/C[a];
	  
	    B[a][a]=B[a-5][a-2]-3;
	  
	    A[a][a]=A[a+2][a]-B[a][a]+B[a][a];
	  
	    C[a]=12;
	    C[a+5]=1;
	  
	    int var_a=C[a]-1;
	    int var_b=C[a-4]+35;
	}

    return 0;
}