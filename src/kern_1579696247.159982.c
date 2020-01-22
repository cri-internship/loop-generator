#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(750, 220, "random");
	int *B = create_one_dim_int(820, "random");
	int *C = create_one_dim_int(440, "random");
	int ***D = create_three_dim_int(870, 30, 490, "random");

	for (int a = 5; a < 437; a++)
	{
	  
	    A[a][a]=A[a-1][a-2]+D[a][a][a]-B[a]*C[a];
	  
	    C[a]=28;
	    C[a+3]=30;
	  
	    A[a][a]=C[a]+D[a][a][a]/B[a];
	}

    return 0;
}