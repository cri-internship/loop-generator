#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(60, 590, 550, "zeros");
	int **A = create_two_dim_int(210, 490, "zeros");

	for (int a = 5; a < 56; a++)
	{
	  
	    A[a][a]=A[a-4][a-5]/B[a][a][a];
	  
	    A[a][a]=A[a-2][a]-34;
	  
	    B[a][a][a]=8;
	    B[a-2][a-1][a-4]=49;
	  
	    B[a][a][a]=A[a][a]-34;
	    A[a][a]=A[a+5][a+5]/B[a][a][a];
	  
	    int var_a=B[a][a][a]-29;
	    int var_b=B[a+4][a+3][a+3]*39;
	}

    return 0;
}