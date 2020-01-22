#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(560, "random");
	float **E = create_two_dim_float(560, 40, "random");
	float ***B = create_three_dim_float(870, 330, 850, "random");
	float **A = create_two_dim_float(340, 190, "random");
	float **C = create_two_dim_float(430, 990, "random");

	for (int a = 3; a < 425; a++)
	{
	  
	    E[a][a]=E[a][a-3]/B[a][a][a]*A[a][a];
	  
	    C[a][a]=C[a+2][a+4]*E[a][a]/D[a]+0.448;
	  
	    E[a][a]=0.79;
	  
	    float var_a=B[a][a][a]/0.764;
	    float var_b=B[a+1][a+1][a+5]/0.418;
	  
	    A[a][a]=C[a][a]-E[a][a]+0.603*D[a];
	    B[a][a][a]=C[a+4][a+5]*A[a][a]-B[a][a][a];
	}

    return 0;
}