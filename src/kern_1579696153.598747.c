#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(500, 10, "random");
	int ***C = create_three_dim_int(360, 810, 220, "random");
	int **A = create_two_dim_int(220, 80, "random");

	for (int a = 5; a < 216; a++)
	{
	  
	    C[a][a][a]=C[a][a][a-3]+45;
	  
	    A[a][a]=A[a+1][a+4]+44;
	  
	    B[a][a]=B[a+2][a+2]*25;
	  
	    C[a][a][a]=9;
	  
	    A[a][a]=B[a][a]+C[a][a][a];
	    B[a][a]=B[a-5][a-1]-A[a][a]*0;
	}

    return 0;
}