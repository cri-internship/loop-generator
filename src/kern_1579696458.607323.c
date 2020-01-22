#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(70, 260, "random");
	float **D = create_two_dim_float(960, 440, "random");
	float ***B = create_three_dim_float(510, 840, 600, "random");
	float **A = create_two_dim_float(730, 270, "random");

	for (int a = 0; a < 65; a++)
	{
	  
	    C[a][a]=C[a+3][a+5]+A[a][a];
	}

    return 0;
}