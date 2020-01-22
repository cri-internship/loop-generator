#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(610, 40, 370, "random");
	float *A = create_one_dim_float(660, "random");
	float *D = create_one_dim_float(340, "random");
	float ***B = create_three_dim_float(600, 190, 680, "random");

	for (int a = 4; a < 610; a++)
	{
	  
	    C[a][a][a]=C[a][a-3][a-4]+0.548;
	  
	    A[a]=A[a+5]+C[a][a][a]*D[a];
	}

    return 0;
}