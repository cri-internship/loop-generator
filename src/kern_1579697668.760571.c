#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(540, 940, 820, "zeros");

	for (int a = 3; a < 535; a++)
	{
	  
	    A[a][a][a]=A[a+5][a+1][a+1]*0.43;
	  
	    A[a][a][a]=0.189;
	}

    return 0;
}