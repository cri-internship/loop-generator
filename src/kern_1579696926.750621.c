#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(620, 380, "ones");
	int *C = create_one_dim_int(250, "ones");
	int *A = create_one_dim_int(910, "ones");

	for (int a = 2; a < 247; a++)
	{
	  
	    A[a]=A[a-2]-18;
	  
	    B[a][a]=B[a][a]+C[a]-A[a];
	    B[a][a]=17;
	  
	    C[a]=B[a][a]/B[a][a];
	    C[a+3]=A[a]-B[a][a];
	  
	    int var_a=B[a][a]*47;
	    int var_b=B[a+1][a+4]+3;
	}

    return 0;
}