#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(50, 1000, "zeros");
	int ***B = create_three_dim_int(630, 690, 310, "zeros");

	for (int a = 1; a < 48; a++)
	{
	  
	    A[a][a]=A[a+2][a+1]-27;
	  
	    B[a][a][a]=B[a][a+1][a]/9;
	  
	    B[a][a][a]=32;
	}

    return 0;
}