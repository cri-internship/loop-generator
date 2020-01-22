#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(310, 730, "zeros");
	int ***A = create_three_dim_int(670, 640, 130, "zeros");

	for (int a = 5; a < 670; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-5][a]/24;
	  
	    A[a][a][a]=A[a-3][a-5][a-5]-16;
	}

    return 0;
}