#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(680, "zeros");
	int **C = create_two_dim_int(270, 950, "zeros");
	int **A = create_two_dim_int(310, 680, "zeros");

	for (int a = 0; a < 679; a++)
	{
	  
	    int var_a=B[a]/24;
	    int var_b=B[a+1]-14;
	}

    return 0;
}