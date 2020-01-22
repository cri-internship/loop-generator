#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(660, "random");
	float *B = create_one_dim_float(430, "random");
	float **E = create_two_dim_float(570, 270, "random");
	float *A = create_one_dim_float(380, "random");
	float **C = create_two_dim_float(890, 560, "random");

	for (int a = 4; a < 377; a++)
	{
	  
	    A[a]=A[a-2]*0.531;
	  
	    A[a]=A[a-3]/0.765;
	  
	    A[a]=A[a+3]+D[a]/0.502;
	  
	    E[a][a]=C[a][a]*A[a]-C[a][a];
	    E[a-1][a-4]=B[a]-0.609/D[a];
	  
	    E[a][a]=A[a];
	  
	    D[a]=0.144;
	    D[a+1]=0.548;
	}

    return 0;
}