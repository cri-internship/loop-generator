#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(770, "random");
	float **B = create_two_dim_float(930, 160, "random");
	float ***C = create_three_dim_float(320, 700, 410, "random");
	float *E = create_one_dim_float(640, "random");
	float *A = create_one_dim_float(910, "random");

	for (int a = 2; a < 905; a++)
	{
	  
	    A[a]=A[a-1]+D[a]*B[a][a]-E[a];
	  
	    B[a][a]=B[a+1][a+2]+0.454;
	  
	    B[a][a]=B[a+5][a]*0.735;
	  
	    A[a]=A[a+5]-C[a][a][a]+B[a][a]/D[a];
	  
	    B[a][a]=B[a+4][a+5]+0.987;
	}

    return 0;
}