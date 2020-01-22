#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(730, "random");
	int *A = create_one_dim_int(490, "random");

	for (int a = 2; a < 490; a++)
	{
	  
	    B[a]=B[a-2]/45;
	  
	    B[a]=B[a+1]+28;
	  
	    int var_a=A[a]*49;
	    int var_b=A[a]*27;
	}

    return 0;
}