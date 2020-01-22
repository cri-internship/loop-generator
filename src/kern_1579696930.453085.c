#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(360, "ones");
	int ***C = create_three_dim_int(350, 750, 650, "ones");
	int **E = create_two_dim_int(80, 210, "ones");
	int **A = create_two_dim_int(610, 830, "ones");
	int ***B = create_three_dim_int(420, 520, 30, "ones");

	for (int a = 3; a < 610; a++)
	{
	  
	    A[a][a]=A[a-3][a-2]-D[a];
	}

    return 0;
}