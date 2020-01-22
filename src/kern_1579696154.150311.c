#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(310, "ones");
	int **C = create_two_dim_int(910, 630, "ones");
	int ***E = create_three_dim_int(180, 910, 510, "ones");
	int ***D = create_three_dim_int(960, 940, 290, "ones");
	int *B = create_one_dim_int(80, "ones");

	for (int a = 4; a < 80; a++)
	{
	  
	    C[a][a]=C[a-1][a-4]*20-B[a];
	  
	    B[a]=14;
	    B[a-4]=4;
	  
	    B[a]=14;
	  
	    A[a]=D[a][a][a]/C[a][a]*27;
	    E[a][a][a]=D[a+4][a+4][a+3]/E[a][a][a]*A[a]+E[a][a][a]-B[a];
	}

    return 0;
}