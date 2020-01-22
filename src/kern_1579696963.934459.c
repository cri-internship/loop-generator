#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(30, 210, 200, "random");
	int *C = create_one_dim_int(880, "random");
	int **A = create_two_dim_int(990, 850, "random");

	for (int a = 5; a < 26; a++)
	{
	  
	    int var_a=B[a][a][a]-41;
	    int var_b=B[a+1][a+4][a+1]-4;
	  
	    A[a][a]=A[a][a]-C[a]*B[a][a][a];
	    B[a][a][a]=A[a-3][a-5]/24+C[a];
	}

    return 0;
}