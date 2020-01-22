#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(50, 880, 440, "random");
	int ***B = create_three_dim_int(410, 20, 350, "random");

	for (int a = 4; a < 46; a++)
	{
	  
	    A[a][a][a]=A[a-4][a][a-3]/B[a][a][a];
	  
	    B[a][a][a]=B[a+1][a+3][a+3]*48;
	  
	    B[a][a][a]=A[a][a][a]/B[a][a][a];
	    A[a][a][a]=A[a+4][a+4][a+1]-B[a][a][a];
	}

    return 0;
}