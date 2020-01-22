#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(320, "random");
	float *C = create_one_dim_float(70, "random");
	float **D = create_two_dim_float(570, 80, "random");
	float ***B = create_three_dim_float(960, 290, 530, "random");
	float ***E = create_three_dim_float(440, 380, 670, "random");

	for (int a = 2; a < 437; a++)
	{
	  
	    B[a][a][a]=B[a-2][a][a-1]+D[a][a]*A[a]/E[a][a][a];
	  
	    B[a][a][a]=B[a+2][a+4][a]/0.764;
	  
	    E[a][a][a]=E[a][a+2][a+3]/B[a][a][a]-A[a];
	  
	    D[a][a]=0.531+E[a][a][a];
	    D[a+3][a+2]=B[a][a][a]/E[a][a][a];
	}

    return 0;
}