#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(950, "ones");
	int *B = create_one_dim_int(600, "ones");
	int *C = create_one_dim_int(30, "ones");

	for (int a = 0; a < 597; a++)
	{
	  
	    A[a]=A[a+1]-B[a]/C[a];
	  
	    B[a]=B[a]*A[a];
	    B[a]=C[a]+A[a];
	  
	    int var_a=B[a]/29;
	    int var_b=B[a+3]+49;
	}

    return 0;
}