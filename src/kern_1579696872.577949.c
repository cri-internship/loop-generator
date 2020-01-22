#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(50, 380, "random");
	float *A = create_one_dim_float(980, "random");
	float ***C = create_three_dim_float(180, 860, 910, "random");
	float *B = create_one_dim_float(190, "random");

	for (int a = 4; a < 188; a++)
	{
	  
	    A[a]=A[a-1]-0.978;
	  
	    A[a]=A[a+1]*0.686;
	  
	    A[a]=D[a][a]/0.295;
	  
	    B[a]=B[a+2]+A[a]/D[a][a];
	}

    return 0;
}