#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(170, 420, "ones");
	float **C = create_two_dim_float(180, 670, "ones");
	float ***E = create_three_dim_float(840, 20, 190, "ones");
	float **D = create_two_dim_float(740, 880, "ones");
	float **A = create_two_dim_float(550, 720, "ones");

	for (int a = 5; a < 170; a++)
	{
	  
	    B[a][a]=B[a-4][a-1]/E[a][a][a]+D[a][a]*C[a][a];
	  
	    C[a][a]=C[a-2][a-2]-B[a][a]+A[a][a]/D[a][a]*A[a][a];
	  
	    C[a][a]=C[a][a+5]*A[a][a]-B[a][a]/0.789;
	  
	    B[a][a]=D[a][a]-C[a][a]*E[a][a][a];
	}

    return 0;
}