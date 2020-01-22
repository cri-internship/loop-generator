#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(890, "ones");
	float ***B = create_three_dim_float(510, 960, 190, "ones");

	for (int a = 1; a < 506; a++)
	{
	  
	    B[a][a][a]=B[a+4][a][a+1]-A[a];
	  
	    A[a]=0.657;
	    A[a-1]=B[a][a][a];
	  
	    A[a]=A[a]/B[a][a][a];
	    B[a][a][a]=A[a+3]/B[a][a][a];
	}

    return 0;
}