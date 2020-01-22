#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(540, "ones");
	double ***A = create_three_dim_double(710, 100, 970, "ones");
	double **B = create_two_dim_double(980, 820, "ones");

	for (int a = 5; a < 710; a++)
	{
	  
	    A[a][a][a]=0.35;
	    A[a-4][a-4][a-5]=0.015;
	}

    return 0;
}