#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(580, "zeros");
	int ***B = create_three_dim_int(630, 510, 240, "zeros");
	int *C = create_one_dim_int(580, "zeros");
	int ***D = create_three_dim_int(880, 690, 860, "zeros");

	for (int a = 5; a < 630; a++)
	{
	  
	    B[a][a][a]=C[a]*D[a][a][a];
	    B[a-5][a-4][a-1]=A[a]-D[a][a][a];
	}

    return 0;
}