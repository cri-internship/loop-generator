#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(190, 630, "random");
	int ***D = create_three_dim_int(380, 630, 320, "random");
	int *B = create_one_dim_int(500, "random");
	int ***C = create_three_dim_int(700, 490, 710, "random");

	for (int a = 4; a < 190; a++)
	{
	  
	    A[a][a]=A[a-4][a-4]*D[a][a][a]-B[a];
	  
	    B[a]=B[a+3]/25;
	  
	    A[a][a]=C[a][a][a]/36-B[a];
	  
	    C[a][a][a]=A[a][a]/B[a]*D[a][a][a];
	    C[a+2][a+1][a+5]=A[a][a]*B[a];
	  
	    B[a]=C[a][a][a]+A[a][a]*D[a][a][a];
	  
	    int var_a=A[a][a]-39;
	    int var_b=A[a-4][a-1]+43;
	}

    return 0;
}