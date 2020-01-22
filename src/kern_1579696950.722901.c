#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(750, 860, "ones");
	int ***A = create_three_dim_int(10, 890, 190, "ones");

	for (int a = 1; a < 10; a++)
	{
	  
	    A[a][a][a]=A[a-1][a][a]/20;
	  
	    B[a][a]=B[a+1][a]+18;
	  
	    B[a][a]=B[a][a]+0;
	    A[a][a][a]=B[a+4][a]+A[a][a][a];
	}

    return 0;
}