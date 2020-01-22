#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(670, 410, 210, "ones");
	float ***B = create_three_dim_float(170, 90, 80, "ones");
	float **D = create_two_dim_float(960, 720, "ones");
	float ***C = create_three_dim_float(280, 50, 380, "ones");
	float ***A = create_three_dim_float(990, 670, 280, "ones");

	for (int a = 4; a < 165; a++)
	{
	  
	    E[a][a][a]=E[a][a-3][a-3]/0.191;
	  
	    C[a][a][a]=C[a][a-4][a-2]/E[a][a][a]*D[a][a]-A[a][a][a];
	  
	    B[a][a][a]=B[a][a+3][a+5]-C[a][a][a]+D[a][a]*C[a][a][a];
	  
	    float var_a=E[a][a][a]-0.297;
	    float var_b=E[a][a-2][a]/0.113;
	}

    return 0;
}