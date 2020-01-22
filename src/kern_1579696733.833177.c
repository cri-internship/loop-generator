#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(660, "zeros");
	int ***A = create_three_dim_int(490, 150, 250, "zeros");

	for (int a = 0; a < 660; a++)
	{
	  
	    B[a]=A[a][a][a];
	    B[a]=A[a][a][a];
	}

    return 0;
}