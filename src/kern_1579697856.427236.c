#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(280, "random");
	float **E = create_two_dim_float(80, 380, "random");
	float *D = create_one_dim_float(860, "random");
	float *B = create_one_dim_float(420, "random");
	float ***A = create_three_dim_float(310, 150, 590, "random");

	for (int a = 5; a < 76; a++)
	{
	  
	    D[a]=D[a-5]*0.576;
	  
	    E[a][a]=E[a-5][a]*0.248;
	  
	    C[a]=C[a+1]+E[a][a]/B[a];
	  
	    E[a][a]=E[a+4][a+3]/A[a][a][a]-0.866;
	  
	    C[a]=C[a]-D[a]*D[a];
	    E[a][a]=C[a-5]/E[a][a]-B[a]*D[a]+A[a][a][a];
	}

    return 0;
}