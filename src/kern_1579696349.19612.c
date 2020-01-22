#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(890, 270, "random");
	double ***C = create_three_dim_double(990, 480, 100, "random");
	double **B = create_two_dim_double(740, 720, "random");
	double ***A = create_three_dim_double(390, 360, 490, "random");

	for (int a = 5; a < 390; a++)
	{
	  
	    C[a][a][a]=C[a+2][a+1][a+4]+0.398;
	  
	    D[a][a]=D[a+1][a+3]/0.47;
	  
	    C[a][a][a]=C[a+4][a+4][a]+0.843;
	  
	    A[a][a][a]=D[a][a]/B[a][a]*C[a][a][a];
	    A[a-2][a-5][a-5]=0.446;
	  
	    D[a][a]=A[a][a][a];
	  
	    A[a][a][a]=0.554;
	}

    return 0;
}