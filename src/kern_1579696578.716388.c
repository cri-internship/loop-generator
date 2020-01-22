#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(430, 570, 420, "random");
	int *B = create_one_dim_int(840, "random");
	int ***D = create_three_dim_int(290, 340, 50, "random");
	int **A = create_two_dim_int(980, 760, "random");

	for (int a = 4; a < 285; a++)
	{
	  
	    D[a][a][a]=D[a-2][a-1][a-3]*22;
	  
	    A[a][a]=A[a+2][a+1]-39;
	  
	    D[a][a][a]=D[a+2][a][a+1]/A[a][a]-B[a];
	  
	    D[a][a][a]=D[a+4][a+1][a+5]/33;
	  
	    C[a][a][a]=5;
	    C[a+3][a+2][a+1]=5;
	  
	    A[a][a]=A[a][a]-15;
	    D[a][a][a]=A[a][a-4]*C[a][a][a]/B[a];
	}

    return 0;
}