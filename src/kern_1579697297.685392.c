#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(930, 990, 440, "random");
	double ***E = create_three_dim_double(310, 960, 940, "random");
	double ***A = create_three_dim_double(770, 740, 890, "random");
	double ***D = create_three_dim_double(770, 390, 270, "random");
	double ***B = create_three_dim_double(200, 720, 800, "random");

	for (int a = 4; a < 200; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-2][a]/0.453;
	  
	    A[a][a][a]=A[a-2][a][a-3]*D[a][a][a]/C[a][a][a]-E[a][a][a];
	  
	    B[a][a][a]=B[a][a-2][a-3]-A[a][a][a]*D[a][a][a]/C[a][a][a];
	  
	    E[a][a][a]=E[a-4][a-4][a-4]*0.592;
	  
	    A[a][a][a]=A[a+4][a][a+3]*0.117;
	  
	    C[a][a][a]=D[a][a][a]+B[a][a][a]*C[a][a][a];
	    D[a][a][a]=D[a+3][a+1][a+1]-C[a][a][a]*E[a][a][a]+B[a][a][a]/A[a][a][a];
	}

    return 0;
}