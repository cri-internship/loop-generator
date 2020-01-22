#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(790, 300, 720, "zeros");
	float ***C = create_three_dim_float(630, 290, 310, "zeros");
	float **E = create_two_dim_float(950, 10, "zeros");
	float *D = create_one_dim_float(260, "zeros");
	float ***A = create_three_dim_float(350, 110, 290, "zeros");

	for (int a = 5; a < 258; a++)
	{
	  
	    B[a][a][a]=C[a][a][a]-E[a][a]*A[a][a][a];
	    A[a][a][a]=C[a-1][a-4][a-5]+0.128/D[a];
	  
	    C[a][a][a]=D[a]/C[a][a][a]*A[a][a][a]-E[a][a];
	    D[a]=D[a+2]/B[a][a][a]+E[a][a]-A[a][a][a]*C[a][a][a];
	  
	    float var_a=E[a][a]+0.737;
	    float var_b=E[a][a+2]*0.074;
	}

    return 0;
}