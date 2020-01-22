#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(130, 990, "ones");
	int ***B = create_three_dim_int(440, 540, 70, "ones");

	for (int a = 4; a < 125; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-1][a-4]*A[a][a];
	  
	    B[a][a][a]=A[a][a];
	  
	    A[a][a]=A[a][a]+B[a][a][a];
	    B[a][a][a]=A[a][a+1]/B[a][a][a];
	  
	    B[a][a][a]=A[a][a]-B[a][a][a];
	    A[a][a]=A[a+3][a+5]+B[a][a][a];
	}

    return 0;
}