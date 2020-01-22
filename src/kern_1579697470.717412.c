#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(580, "random");
	float ***C = create_three_dim_float(660, 590, 650, "random");
	float ***B = create_three_dim_float(880, 740, 260, "random");

	for (int a = 5; a < 576; a++)
	{
	  
	    C[a][a][a]=C[a-2][a][a]*A[a];
	  
	    A[a]=A[a-5]*0.514;
	  
	    C[a][a][a]=C[a+4][a+3][a+4]/0.548;
	  
	    A[a]=0.761;
	  
	    C[a][a][a]=C[a][a][a]+B[a][a][a];
	    B[a][a][a]=C[a+1][a+5][a]/A[a];
	  
	    float var_a=C[a][a][a]*0.837;
	    float var_b=C[a+5][a][a+1]/0.705;
	  
	    float var_c=B[a][a][a]-0.459;
	    float var_d=B[a+5][a+1][a+5]+0.603;
	}

    return 0;
}