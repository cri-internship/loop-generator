#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(490, 1000, 230, "random");
	float *E = create_one_dim_float(880, "random");
	float *A = create_one_dim_float(570, "random");
	float ***B = create_three_dim_float(860, 150, 770, "random");
	float *D = create_one_dim_float(80, "random");

	for (int a = 2; a < 80; a++)
	{
	  
	    E[a]=E[a-2]/D[a]*A[a]+0.654;
	  
	    A[a]=D[a]*E[a]/B[a][a][a];
	    D[a]=B[a][a][a]/C[a][a][a];
	  
	    float var_a=E[a]+0.465;
	    E[a]=0.346;
	  
	    C[a][a][a]=C[a+2][a+3][a+3]+A[a];
	  
	    D[a]=C[a][a][a]*D[a]+E[a]/A[a]-B[a][a][a];
	    C[a][a][a]=C[a][a+4][a]+B[a][a][a]-D[a]*E[a];
	  
	    B[a][a][a]=E[a]*A[a];
	    E[a]=E[a+2]/C[a][a][a]+A[a]*0.602;
	  
	    float var_b=A[a]*0.641;
	    float var_c=A[a-2]/0.45;
	}

    return 0;
}