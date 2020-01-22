#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(830, 170, "random");
	int **C = create_two_dim_int(110, 450, "random");
	int ***D = create_three_dim_int(210, 920, 960, "random");
	int ***B = create_three_dim_int(650, 50, 860, "random");

	for (int a = 5; a < 648; a++)
	{
	  
	    A[a][a]=A[a-5][a]/C[a][a]-B[a][a][a];
	  
	    int var_a=B[a][a][a]-27;
	    int var_b=B[a+2][a+2][a]*45;
	}

    return 0;
}