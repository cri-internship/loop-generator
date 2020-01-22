#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(830, 360, "ones");
	int ***B = create_three_dim_int(820, 260, 450, "ones");
	int ***C = create_three_dim_int(750, 120, 340, "ones");

	for (int a = 4; a < 815; a++)
	{
	  
	    A[a][a]=A[a-4][a-4]+C[a][a][a];
	  
	    A[a][a]=A[a+2][a+5]-B[a][a][a];
	  
	    B[a][a][a]=A[a][a]/A[a][a];
	    B[a+3][a+4][a+5]=A[a][a];
	}

    return 0;
}