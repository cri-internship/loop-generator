#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(130, 310, 180, "random");
	int *A = create_one_dim_int(340, "random");

	for (int a = 4; a < 126; a++)
	{
	  
	    B[a][a][a]=B[a+1][a][a+4]-A[a];
	  
	    int var_a=B[a][a][a]-6;
	    int var_b=B[a-4][a-2][a]/0;
	}

    return 0;
}