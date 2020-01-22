#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(960, 800, "random");
	int **A = create_two_dim_int(380, 270, "random");
	int **B = create_two_dim_int(730, 280, "random");
	int ***C = create_three_dim_int(310, 560, 10, "random");

	for (int a = 4; a < 378; a++)
	{
	  
	    D[a][a]=D[a-3][a-2]-23;
	  
	    A[a][a]=A[a][a+2]/19;
	  
	    A[a][a]=41;
	  
	    int var_a=D[a][a]-19;
	    int var_b=D[a-4][a-4]-2;
	}

    return 0;
}