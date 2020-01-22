#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(740, "random");
	int **A = create_two_dim_int(980, 160, "random");
	int ***D = create_three_dim_int(980, 610, 290, "random");
	int *B = create_one_dim_int(980, "random");

	for (int a = 5; a < 738; a++)
	{
	  
	    D[a][a][a]=D[a-5][a-2][a]-8;
	  
	    C[a]=C[a+2]-A[a][a];
	  
	    C[a]=42;
	  
	    A[a][a]=A[a][a]/B[a]+C[a]-D[a][a][a];
	    B[a]=A[a+1][a+5]-D[a][a][a]+C[a];
	}

    return 0;
}