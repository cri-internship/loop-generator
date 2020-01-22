#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(510, 480, 230, "random");
	int **E = create_two_dim_int(640, 700, "random");
	int *A = create_one_dim_int(310, "random");
	int ***C = create_three_dim_int(460, 790, 660, "random");
	int **B = create_two_dim_int(610, 710, "random");

	for (int a = 5; a < 456; a++)
	{
	  
	    E[a][a]=E[a-5][a-1]-D[a][a][a]/B[a][a];
	  
	    C[a][a][a]=C[a+4][a+3][a+3]-A[a];
	}

    return 0;
}