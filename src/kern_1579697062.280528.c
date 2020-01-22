#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(370, "ones");
	int *B = create_one_dim_int(330, "ones");

	for (int a = 4; a < 326; a++)
	{
	  
	    A[a]=A[a+4]/41;
	  
	    A[a]=A[a+3]-24;
	  
	    B[a]=33;
	    B[a-4]=9;
	  
	    B[a]=A[a];
	  
	    int var_a=A[a]+4;
	    int var_b=A[a-1]-41;
	}

    return 0;
}