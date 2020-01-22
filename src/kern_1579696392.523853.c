#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(1000, 550, 720, "random");
	float **C = create_two_dim_float(480, 860, "random");
	float ***E = create_three_dim_float(850, 980, 750, "random");
	float *D = create_one_dim_float(890, "random");
	float *B = create_one_dim_float(310, "random");

	for (int a = 0; a < 885; a++)
	{
	  
	    D[a]=D[a+5]*A[a][a][a]+0.017;
	}

    return 0;
}