#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(490, "random");
	float *B = create_one_dim_float(310, "random");
	float **A = create_two_dim_float(90, 530, "random");
	float ***C = create_three_dim_float(780, 690, 780, "random");
	float **E = create_two_dim_float(100, 950, "random");

	for (int a = 5; a < 96; a++)
	{
	  
	    E[a][a]=E[a-4][a-3]*0.956;
	  
	    D[a]=D[a-5]+0.498;
	  
	    C[a][a][a]=C[a-3][a-4][a]/0.989;
	  
	    E[a][a]=E[a-4][a-1]/0.113;
	  
	    B[a]=B[a+4]+D[a]-E[a][a]*C[a][a][a];
	}

    return 0;
}