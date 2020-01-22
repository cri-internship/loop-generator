#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(80, 790, 930, "zeros");
	float **B = create_two_dim_float(790, 740, "zeros");
	float **C = create_two_dim_float(330, 890, "zeros");

	for (int a = 0; a < 75; a++)
	{
	  
	    A[a][a][a]=A[a+5][a+4][a]-0.187;
	  
	    A[a][a][a]=A[a][a+5][a+5]*0.823;
	  
	    B[a][a]=B[a+4][a+4]-0.382;
	}

    return 0;
}