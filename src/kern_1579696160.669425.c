#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(960, "random");

	for (int a = 2; a < 960; a++)
	{
	  
	    int var_a=A[a]*46;
	    int var_b=A[a-2]*39;
	}

    return 0;
}