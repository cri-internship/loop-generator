#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(890, 220, 880, "zeros");
	int **B = create_two_dim_int(720, 320, "zeros");
	int **E = create_two_dim_int(390, 130, "zeros");
	int ***D = create_three_dim_int(60, 190, 690, "zeros");
	int ***C = create_three_dim_int(380, 10, 580, "zeros");

	for (int a = 3; a < 60; a++)
	{
	  
	    int var_a=D[a][a][a]+22;
	    int var_b=D[a-1][a-3][a-3]*38;
	}

    return 0;
}