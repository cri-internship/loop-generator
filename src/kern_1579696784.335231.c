#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(390, 400, "ones");
	float ***A = create_three_dim_float(470, 60, 640, "ones");

	for (int a = 0; a < 465; a++)
	{
	  
	    A[a][a][a]=A[a][a+5][a+1]*0.023;
	  
	    A[a][a][a]=A[a+5][a+1][a+3]+0.593;
	}

    return 0;
}