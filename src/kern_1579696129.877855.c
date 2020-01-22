#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(960, 760, 350, "zeros");
	int ***E = create_three_dim_int(540, 910, 570, "zeros");
	int **D = create_two_dim_int(480, 520, "zeros");
	int *A = create_one_dim_int(930, "zeros");
	int **B = create_two_dim_int(890, 260, "zeros");

	for (int a = 3; a < 540; a++)
	{
	  
	    D[a][a]=E[a][a][a]/A[a]+C[a][a][a];
	    C[a][a][a]=E[a-3][a-1][a-1]+B[a][a]*D[a][a];
	}

    return 0;
}