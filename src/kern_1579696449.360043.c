#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(400, 820, "random");
	int **D = create_two_dim_int(620, 970, "random");
	int **E = create_two_dim_int(250, 170, "random");
	int ***A = create_three_dim_int(530, 540, 150, "random");
	int *C = create_one_dim_int(140, "random");

	for (int a = 1; a < 400; a++)
	{
	  
	    B[a][a]=B[a][a-1]*A[a][a][a]-D[a][a]/C[a]+E[a][a];
	}

    return 0;
}