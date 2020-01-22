#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(460, 370, "random");
	float ***C = create_three_dim_float(450, 780, 400, "random");
	float ***A = create_three_dim_float(940, 260, 470, "random");

	for (int a = 0; a < 445; a++)
	{
	  
	    C[a][a][a]=C[a+5][a+1][a+1]-0.709;
	  
	    B[a][a]=0.128;
	    B[a+4][a+3]=0.667;
	}

    return 0;
}