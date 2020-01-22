#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(250, 200, 30, "zeros");
	int *C = create_one_dim_int(310, "zeros");
	int **D = create_two_dim_int(830, 130, "zeros");
	int **A = create_two_dim_int(760, 50, "zeros");

	for (int a = 1; a < 245; a++)
	{
	  
	    D[a][a]=D[a-1][a]-B[a][a][a]/13;
	  
	    B[a][a][a]=B[a+5][a+3][a]*10;
	}

    return 0;
}