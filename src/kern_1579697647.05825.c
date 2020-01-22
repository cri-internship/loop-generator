#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(780, 310, "random");
	int **C = create_two_dim_int(360, 630, "random");
	int ***B = create_three_dim_int(890, 910, 150, "random");
	int **A = create_two_dim_int(820, 100, "random");

	for (int a = 2; a < 360; a++)
	{
	  
	    C[a][a]=C[a-1][a-2]/16;
	  
	    D[a][a]=D[a+1][a+2]+20;
	  
	    int var_a=B[a][a][a]-0;
	    int var_b=B[a][a+1][a+4]*5;
	}

    return 0;
}