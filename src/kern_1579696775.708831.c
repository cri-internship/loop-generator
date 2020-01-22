#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(1000, "random");
	int *B = create_one_dim_int(110, "random");

	for (int a = 5; a < 105; a++)
	{
	  
	    B[a]=B[a+1]/A[a];
	  
	    B[a]=B[a+5]/A[a];
	  
	    A[a]=6;
	    A[a-3]=15;
	  
	    A[a]=B[a]-A[a];
	    B[a]=B[a-3]-A[a];
	  
	    int var_a=B[a]/10;
	    int var_b=B[a-5]+8;
	}

    return 0;
}