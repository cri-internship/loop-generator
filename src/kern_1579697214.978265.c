#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(130, 570, 480, "zeros");
	int *A = create_one_dim_int(260, "zeros");
	int **C = create_two_dim_int(100, 610, "zeros");
	int *B = create_one_dim_int(1000, "zeros");

	for (int a = 5; a < 100; a++)
	{
	  
	    D[a][a][a]=D[a-3][a-4][a-2]+B[a]-18;
	  
	    D[a][a][a]=D[a][a+5][a+3]/5;
	  
	    D[a][a][a]=D[a+5][a+1][a+1]/8;
	  
	    C[a][a]=1;
	    C[a-2][a-5]=A[a]/A[a]-D[a][a][a];
	}

    return 0;
}