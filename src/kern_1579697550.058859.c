#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(940, 410, "random");
	int ***B = create_three_dim_int(390, 410, 750, "random");
	int **C = create_two_dim_int(640, 810, "random");

	for (int a = 5; a < 385; a++)
	{
	  
	    C[a][a]=C[a][a-3]*27;
	  
	    A[a][a]=A[a+5][a]+49;
	  
	    B[a][a][a]=B[a][a+2][a+3]/16*C[a][a];
	  
	    A[a][a]=A[a+2][a+2]*49;
	  
	    C[a][a]=25;
	  
	    B[a][a][a]=28;
	}

    return 0;
}