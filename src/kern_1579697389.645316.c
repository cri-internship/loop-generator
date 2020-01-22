#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(470, "ones");
	float ***A = create_three_dim_float(690, 870, 890, "ones");

	for (int a = 5; a < 465; a++)
	{
	  
	    A[a][a][a]=A[a-4][a][a-3]-B[a];
	  
	    B[a]=B[a-4]-0.839;
	  
	    B[a]=B[a+5]-A[a][a][a];
	  
	    B[a]=0.206;
	}

    return 0;
}