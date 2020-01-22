#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(930, "random");

	for (int a = 0; a < 925; a++)
	{
	  
	    int var_a=A[a]/42;
	    int var_b=A[a+5]/0;
	}

    return 0;
}