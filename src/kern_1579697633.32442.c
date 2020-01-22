#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(250, 440, 850, "random");
	float **B = create_two_dim_float(190, 540, "random");

	for (int a = 4; a < 190; a++)
	{
	  
	    B[a][a]=B[a-4][a-2]*0.994;
	}

    return 0;
}