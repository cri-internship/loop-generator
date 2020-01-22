#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(10, 890, "ones");
	int ***C = create_three_dim_int(670, 250, 450, "ones");
	int ***B = create_three_dim_int(740, 390, 680, "ones");
	int **A = create_two_dim_int(430, 980, "ones");
	int ***D = create_three_dim_int(120, 990, 150, "ones");

	for (int a = 4; a < 670; a++)
	{
	  
	    D[a][a][a]=C[a][a][a]-23;
	    E[a][a]=C[a-2][a-4][a]/7*A[a][a];
	}

    return 0;
}