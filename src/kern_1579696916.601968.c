#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(740, 630, 570, "random");
	float ***E = create_three_dim_float(90, 350, 100, "random");
	float **D = create_two_dim_float(650, 810, "random");
	float ***B = create_three_dim_float(250, 160, 880, "random");
	float **C = create_two_dim_float(440, 190, "random");

	for (int a = 5; a < 90; a++)
	{
	  
	    E[a][a][a]=E[a-5][a-3][a-3]-0.405/A[a][a][a]*D[a][a];
	  
	    D[a][a]=D[a-2][a]/0.827;
	  
	    A[a][a][a]=A[a+5][a][a+1]-C[a][a]/E[a][a][a]+E[a][a][a]*C[a][a];
	  
	    float var_a=B[a][a][a]+0.184;
	    float var_b=B[a+2][a+5][a+4]/0.911;
	  
	    B[a][a][a]=A[a][a][a]-E[a][a][a]*C[a][a];
	    E[a][a][a]=A[a-3][a-3][a-1]+B[a][a][a]-D[a][a]/E[a][a][a];
	}

    return 0;
}