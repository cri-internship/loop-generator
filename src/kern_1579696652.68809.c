#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(650, 10, "ones");
	int ***A = create_three_dim_int(200, 240, 60, "ones");

	for (int a = 0; a < 195; a++)
	{
	  
	    A[a][a][a]=A[a+3][a+5][a+3]+47;
	  
	    B[a][a]=A[a][a][a];
	    B[a+2][a+2]=A[a][a][a];
	}

    return 0;
}