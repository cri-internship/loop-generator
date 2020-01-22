#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(150, "ones");
	int **B = create_two_dim_int(970, 140, "ones");

	for (int a = 5; a < 148; a++)
	{
	  
	    A[a]=A[a-5]-B[a][a];
	  
	    B[a][a]=B[a-3][a-4]/3;
	  
	    A[a]=A[a+2]-B[a][a];
	  
	    A[a]=B[a][a];
	  
	    int var_a=B[a][a]/35;
	    int var_b=B[a+4][a+4]+12;
	}

    return 0;
}