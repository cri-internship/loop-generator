#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(270, 560, 480, "random");
	float **D = create_two_dim_float(890, 400, "random");
	float **E = create_two_dim_float(290, 890, "random");
	float **B = create_two_dim_float(710, 380, "random");
	float ***C = create_three_dim_float(920, 160, 330, "random");

	for (int a = 3; a < 288; a++)
	{
	  
	    B[a][a]=B[a-2][a-3]+0.542;
	  
	    C[a][a][a]=C[a+4][a+5][a+5]-A[a][a][a];
	  
	    E[a][a]=E[a][a+2]-D[a][a]+C[a][a][a];
	}

    return 0;
}