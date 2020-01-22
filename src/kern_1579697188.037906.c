#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(810, 470, 850, "random");
	float ***C = create_three_dim_float(690, 460, 470, "random");
	float ***A = create_three_dim_float(650, 410, 760, "random");
	float ***D = create_three_dim_float(430, 620, 70, "random");
	float ***B = create_three_dim_float(860, 570, 50, "random");

	for (int a = 4; a < 430; a++)
	{
	  
	    E[a][a][a]=E[a+4][a+1][a+4]*0.974;
	  
	    C[a][a][a]=C[a+3][a+5][a+4]*0.897;
	  
	    B[a][a][a]=C[a][a][a]-E[a][a][a]+A[a][a][a]*D[a][a][a];
	    B[a-3][a-1][a-3]=E[a][a][a]-D[a][a][a]*C[a][a][a]/A[a][a][a];
	  
	    E[a][a][a]=E[a][a][a]+B[a][a][a];
	    D[a][a][a]=E[a-1][a-4][a-3]-C[a][a][a]*D[a][a][a]+B[a][a][a]/A[a][a][a];
	  
	    float var_a=D[a][a][a]*0.998;
	    float var_b=D[a-4][a-2][a-4]-0.133;
	}

    return 0;
}