#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(670, "random");
	float ***E = create_three_dim_float(420, 150, 600, "random");
	float **C = create_two_dim_float(390, 480, "random");
	float **A = create_two_dim_float(330, 10, "random");
	float ***B = create_three_dim_float(680, 400, 590, "random");

	for (int a = 5; a < 330; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-5][a-4]*A[a][a];
	  
	    C[a][a]=C[a+4][a+3]/D[a]-B[a][a][a];
	  
	    A[a][a]=0.585;
	    A[a][a]=0.094;
	}

    return 0;
}