#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(10, 640, 260, "random");
	float *C = create_one_dim_float(70, "random");
	float ***B = create_three_dim_float(560, 1000, 450, "random");

	for (int a = 0; a < 65; a++)
	{
	  
	    C[a]=C[a+5]+0.554;
	}

    return 0;
}