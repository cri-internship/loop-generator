#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(180, 100, 610, "random");
	float *A = create_one_dim_float(930, "random");

	for (int a = 4; a < 180; a++)
	{
	  
	    A[a]=B[a][a][a];
	    A[a-1]=0.169;
	  
	    A[a]=B[a][a][a];
	  
	    B[a][a][a]=B[a][a][a]+0.099;
	    A[a]=B[a-4][a][a]*A[a];
	}

    return 0;
}