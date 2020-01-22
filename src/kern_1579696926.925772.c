#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(380, 150, "random");
	int ***B = create_three_dim_int(290, 30, 510, "random");

	for (int a = 0; a < 376; a++)
	{
	  
	    A[a][a]=A[a+4][a+3]+38;
	  
	    A[a][a]=B[a][a][a];
	  
	    A[a][a]=A[a][a]*12;
	    B[a][a][a]=A[a+3][a+4]/B[a][a][a];
	}

    return 0;
}