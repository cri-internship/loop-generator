#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(310, 100, "ones");
	int **A = create_two_dim_int(450, 610, "ones");

	for (int a = 5; a < 307; a++)
	{
	  
	    A[a][a]=14;
	    A[a-3][a-5]=34;
	  
	    A[a][a]=11;
	  
	    B[a][a]=39;
	    B[a+3][a+3]=11;
	}

    return 0;
}