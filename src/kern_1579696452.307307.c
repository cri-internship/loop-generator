#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(390, 180, "zeros");
	float ***C = create_three_dim_float(490, 670, 670, "zeros");
	float **E = create_two_dim_float(690, 220, "zeros");
	float ***A = create_three_dim_float(850, 320, 450, "zeros");
	float ***B = create_three_dim_float(280, 440, 130, "zeros");

	for (int a = 4; a < 277; a++)
	{
	  
	    E[a][a]=E[a][a-4]/0.527;
	  
	    B[a][a][a]=B[a+3][a+1][a+1]+0.299-C[a][a][a]/E[a][a];
	  
	    D[a][a]=A[a][a][a]+B[a][a][a];
	    D[a+1][a+5]=B[a][a][a]-C[a][a][a];
	}

    return 0;
}