#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(440, "zeros");
	int *B = create_one_dim_int(440, "zeros");
	int ***A = create_three_dim_int(370, 30, 380, "zeros");

	for (int a = 3; a < 440; a++)
	{
	  
	    C[a]=A[a][a][a];
	    C[a-3]=B[a]*B[a];
	}

    return 0;
}