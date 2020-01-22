#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(470, 180, "ones");
	int *A = create_one_dim_int(560, "ones");
	int *D = create_one_dim_int(530, "ones");
	int *C = create_one_dim_int(860, "ones");

	for (int a = 2; a < 530; a++)
	{
	  
	    int var_a=D[a]/30;
	    D[a]=24;
	  
	    D[a]=A[a]*B[a][a];
	}

    return 0;
}