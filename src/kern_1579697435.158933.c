#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(120, 370, 60, "ones");
	double *B = create_one_dim_double(260, "ones");

	for (int a = 5; a < 116; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-1][a-1]*0.803;
	  
	    A[a][a][a]=0.57;
	}

    return 0;
}