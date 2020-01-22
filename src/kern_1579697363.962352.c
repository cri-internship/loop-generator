#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(930, 820, "random");
	double ***D = create_three_dim_double(920, 820, 320, "random");
	double ***B = create_three_dim_double(770, 910, 660, "random");
	double ***E = create_three_dim_double(580, 920, 440, "random");
	double *C = create_one_dim_double(370, "random");

	for (int a = 5; a < 370; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-3][a-4]+0.039;
	  
	    B[a][a][a]=B[a][a][a-5]*0.968;
	  
	    C[a]=C[a-1]-0.858;
	  
	    B[a][a][a]=B[a-5][a-2][a-5]-E[a][a][a]/D[a][a][a]*C[a];
	  
	    D[a][a][a]=D[a-3][a-2][a]-0.046;
	  
	    B[a][a][a]=B[a+3][a+1][a]/A[a][a]*C[a]+E[a][a][a];
	  
	    D[a][a][a]=D[a+1][a+4][a+5]+B[a][a][a];
	}

    return 0;
}