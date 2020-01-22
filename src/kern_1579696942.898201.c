#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(150, "random");
	float **B = create_two_dim_float(270, 250, "random");
	float **A = create_two_dim_float(430, 70, "random");
	float ***D = create_three_dim_float(900, 270, 340, "random");
	float ***C = create_three_dim_float(240, 310, 540, "random");

	for (int a = 2; a < 145; a++)
	{
	  
	    D[a][a][a]=D[a+2][a+2][a+5]/C[a][a][a]+E[a]-B[a][a]*A[a][a];
	  
	    E[a]=E[a+5]+D[a][a][a]/B[a][a]-A[a][a]*0.448;
	  
	    A[a][a]=B[a][a]/D[a][a][a];
	    A[a+5][a]=E[a];
	  
	    D[a][a][a]=0.414;
	  
	    C[a][a][a]=E[a]-D[a][a][a]*A[a][a];
	    C[a-1][a-2][a-2]=D[a][a][a]*A[a][a]/E[a];
	}

    return 0;
}