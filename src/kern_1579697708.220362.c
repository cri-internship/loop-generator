#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(480, 740, "random");
	float **A = create_two_dim_float(370, 910, "random");
	float **B = create_two_dim_float(850, 820, "random");

	for (int a = 0; a < 845; a++)
	{
	  
	    B[a][a]=B[a+5][a+5]*0.862;
	}

    return 0;
}