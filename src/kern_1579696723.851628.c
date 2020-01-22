#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(750, 810, 430, "zeros");
	int **B = create_two_dim_int(490, 860, "zeros");
	int *A = create_one_dim_int(370, "zeros");
	int *E = create_one_dim_int(930, "zeros");
	int **D = create_two_dim_int(380, 330, "zeros");

	for (int a = 2; a < 930; a++)
	{
	  
	    E[a]=E[a-2]*13;
	}

    return 0;
}