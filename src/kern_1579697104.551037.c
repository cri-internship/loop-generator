#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(920, "random");
	int ***B = create_three_dim_int(520, 700, 690, "random");

	for (int a = 4; a < 520; a++)
	{
	  
	    A[a]=B[a][a][a]-23;
	    B[a][a][a]=B[a-4][a-1][a-4]*A[a];
	  
	    int var_a=A[a]-50;
	    int var_b=A[a-1]*2;
	}

    return 0;
}