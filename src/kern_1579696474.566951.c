#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(560, 870, 450, "random");
	int **E = create_two_dim_int(60, 280, "random");
	int ***C = create_three_dim_int(490, 360, 620, "random");
	int **B = create_two_dim_int(870, 430, "random");
	int **A = create_two_dim_int(510, 60, "random");

	for (int a = 5; a < 560; a++)
	{
	  
	    B[a][a]=41;
	    B[a+5][a+5]=0;
	  
	    int var_a=D[a][a][a]+26;
	    int var_b=D[a-1][a-5][a-2]/38;
	}

    return 0;
}