#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(550, 320, 330, "zeros");
	float *C = create_one_dim_float(10, "zeros");
	float ***B = create_three_dim_float(250, 470, 600, "zeros");
	float **A = create_two_dim_float(420, 650, "zeros");

	for (int a = 0; a < 247; a++)
	{
	  
	    B[a][a][a]=B[a+1][a+3][a+3]-C[a]+0.516;
	}

    return 0;
}