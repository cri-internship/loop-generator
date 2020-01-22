#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(540, 310, 950, "zeros");
	int *B = create_one_dim_int(250, "zeros");
	int ***C = create_three_dim_int(910, 770, 900, "zeros");
	int *A = create_one_dim_int(130, "zeros");

	for (int a = 1; a < 130; a++)
	{
	  
	    A[a]=B[a];
	    A[a-1]=C[a][a][a];
	}

    return 0;
}