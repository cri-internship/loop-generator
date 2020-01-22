#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(930, 480, 390, "random");
	float *B = create_one_dim_float(170, "random");
	float ***D = create_three_dim_float(500, 160, 450, "random");
	float *C = create_one_dim_float(160, "random");

	for (int a = 3; a < 158; a++)
	{
	  
	    C[a]=C[a+2]-0.287+A[a][a][a];
	  
	    D[a][a][a]=D[a+3][a+2][a+2]-C[a]*B[a]/C[a];
	  
	    C[a]=B[a]/D[a][a][a]+D[a][a][a]*C[a];
	    B[a]=C[a]*D[a][a][a]-A[a][a][a];
	  
	    B[a]=0.085;
	  
	    D[a][a][a]=A[a][a][a];
	}

    return 0;
}