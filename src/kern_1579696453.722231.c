#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(980, "zeros");
	int *C = create_one_dim_int(740, "zeros");
	int *A = create_one_dim_int(50, "zeros");

	for (int a = 2; a < 45; a++)
	{
	  
	    A[a]=A[a+5]/29;
	  
	    A[a]=A[a+2]+B[a];
	  
	    int var_a=B[a]+5;
	    int var_b=B[a-2]+37;
	}

    return 0;
}