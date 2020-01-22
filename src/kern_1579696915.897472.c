#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(740, 800, "ones");
	double ***A = create_three_dim_double(420, 540, 370, "ones");
	double ***C = create_three_dim_double(800, 900, 230, "ones");

	for (int a = 4; a < 417; a++)
	{
	  
	    A[a][a][a]=A[a+1][a+3][a+3]/0.298;
	  
	    A[a][a][a]=0.841;
	}

    return 0;
}