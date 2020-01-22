#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(950, 730, "ones");
	int **D = create_two_dim_int(790, 980, "ones");
	int ***C = create_three_dim_int(880, 420, 340, "ones");
	int ***E = create_three_dim_int(340, 960, 810, "ones");
	int *A = create_one_dim_int(420, "ones");

	for (int a = 0; a < 787; a++)
	{
	  
	    D[a][a]=22;
	    D[a+3][a+2]=37;
	}

    return 0;
}