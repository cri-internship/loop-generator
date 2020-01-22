#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(770, 360, "zeros");
	int **B = create_two_dim_int(450, 940, "zeros");
	int ***C = create_three_dim_int(700, 700, 140, "zeros");

	for (int a = 0; a < 449; a++)
	{
	  
	    int var_a=B[a][a]-10;
	    int var_b=B[a+1][a+1]*0;
	}

    return 0;
}