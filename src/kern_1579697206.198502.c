#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(370, 610, "ones");
	double ***A = create_three_dim_double(800, 960, 510, "ones");
	double *B = create_one_dim_double(670, "ones");
	double *D = create_one_dim_double(10, "ones");

	for (int a = 3; a < 370; a++)
	{
	  
	    C[a][a]=C[a-2][a-3]/0.947;
	  
	    A[a][a][a]=A[a-1][a][a]+0.169;
	}

    return 0;
}