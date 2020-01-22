#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(440, 280, "random");
	float ***A = create_three_dim_float(750, 420, 120, "random");

	for (int a = 4; a < 435; a++)
	{
	  
	    B[a][a]=B[a][a-4]*0.308;
	  
	    A[a][a][a]=A[a+1][a+3][a+3]/0.992;
	  
	    B[a][a]=B[a+4][a+3]-0.348;
	  
	    B[a][a]=B[a+5][a+4]*A[a][a][a];
	  
	    A[a][a][a]=A[a+3][a+2][a+2]*B[a][a];
	  
	    B[a][a]=B[a+5][a+5]+0.979;
	}

    return 0;
}