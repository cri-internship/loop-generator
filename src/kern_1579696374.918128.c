#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(180, "zeros");
	int **C = create_two_dim_int(780, 10, "zeros");
	int **B = create_two_dim_int(360, 890, "zeros");

	for (int a = 0; a < 180; a++)
	{
	  
	    int var_a=A[a]-4;
	    int var_b=A[a]*36;
	}

    return 0;
}