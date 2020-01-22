#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(670, 100, 730, "random");
	int ***A = create_three_dim_int(670, 50, 40, "random");

	for (int a = 4; a < 665; a++)
	{
	  
	    B[a][a][a]=B[a+1][a+2][a+1]*22;
	  
	    A[a][a][a]=B[a][a][a];
	    A[a+3][a+1][a+5]=B[a][a][a];
	  
	    B[a][a][a]=24;
	  
	    A[a][a][a]=A[a][a][a]+B[a][a][a];
	    B[a][a][a]=A[a-4][a-3][a-3]+B[a][a][a];
	}

    return 0;
}