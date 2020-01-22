#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(280, 490, 740, "zeros");
	int *D = create_one_dim_int(430, "zeros");
	int ***B = create_three_dim_int(750, 760, 920, "zeros");
	int *A = create_one_dim_int(590, "zeros");

	for (int a = 5; a < 280; a++)
	{
	  
	    C[a][a][a]=A[a]+B[a][a][a]-D[a];
	    C[a-3][a-5][a-1]=D[a]-B[a][a][a];
	}

    return 0;
}