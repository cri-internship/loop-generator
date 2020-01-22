#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(330, "ones");
	int *C = create_one_dim_int(620, "ones");
	int ***B = create_three_dim_int(360, 990, 660, "ones");

	for (int a = 0; a < 355; a++)
	{
	  
	    B[a][a][a]=A[a]-C[a];
	    B[a+4][a+5][a+1]=C[a]-24;
	}

    return 0;
}