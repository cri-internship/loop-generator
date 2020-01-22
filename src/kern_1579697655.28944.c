#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(250, 490, 380, "zeros");
	float ***D = create_three_dim_float(10, 390, 430, "zeros");
	float **A = create_two_dim_float(560, 630, "zeros");
	float *B = create_one_dim_float(560, "zeros");

	for (int a = 5; a < 245; a++)
	{
	  
	    C[a][a][a]=C[a][a-5][a-3]-0.661;
	  
	    B[a]=0.354;
	    B[a+5]=0.529;
	  
	    B[a]=0.694;
	  
	    C[a][a][a]=0.82;
	}

    return 0;
}