#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(820, 930, "zeros");
	int **B = create_two_dim_int(440, 870, "zeros");
	int *A = create_one_dim_int(990, "zeros");

	for (int a = 5; a < 820; a++)
	{
	  
	    A[a]=22;
	    A[a+5]=10;
	  
	    A[a]=2;
	  
	    int var_a=C[a][a]+48;
	    int var_b=C[a-1][a]*9;
	}

    return 0;
}