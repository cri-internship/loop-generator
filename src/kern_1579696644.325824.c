#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(220, "ones");
	int *B = create_one_dim_int(200, "ones");

	for (int a = 1; a < 196; a++)
	{
	  
	    B[a]=B[a+4]-50;
	  
	    int var_a=A[a]-50;
	    int var_b=A[a+3]-21;
	  
	    int var_c=A[a]-13;
	    int var_d=A[a-1]-19;
	}

    return 0;
}