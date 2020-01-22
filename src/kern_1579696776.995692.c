#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(890, 880, "zeros");
	int **A = create_two_dim_int(270, 170, "zeros");
	int ***C = create_three_dim_int(640, 350, 110, "zeros");

	for (int a = 5; a < 267; a++)
	{
	  
	    B[a][a]=B[a][a-2]/A[a][a];
	  
	    A[a][a]=A[a+3][a+2]/14;
	  
	    A[a][a]=14;
	  
	    B[a][a]=C[a][a][a]*44;
	  
	    C[a][a][a]=6;
	    C[a+1][a][a+1]=4;
	}

    return 0;
}