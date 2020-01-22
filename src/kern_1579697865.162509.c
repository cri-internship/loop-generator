#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(610, 20, 1000, "random");
	float *B = create_one_dim_float(540, "random");

	for (int a = 5; a < 539; a++)
	{
	  
	    B[a]=B[a-3]-0.341;
	  
	    B[a]=B[a-5]-0.395;
	  
	    A[a][a][a]=B[a];
	    A[a+5][a+5][a+4]=B[a];
	}

    return 0;
}