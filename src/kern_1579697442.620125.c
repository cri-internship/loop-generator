#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(270, 30, "zeros");
	int **A = create_two_dim_int(400, 160, "zeros");

	for (int a = 5; a < 270; a++)
	{
	  
	    A[a][a]=A[a-2][a]-B[a][a];
	  
	    A[a][a]=A[a+2][a+2]-11;
	  
	    int var_a=B[a][a]*0;
	    int var_b=B[a-5][a-5]/0;
	}

    return 0;
}