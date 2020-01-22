#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(770, 800, 900, "random");
	float ***C = create_three_dim_float(980, 480, 470, "random");
	float ***E = create_three_dim_float(130, 700, 130, "random");
	float ***A = create_three_dim_float(590, 120, 850, "random");
	float ***D = create_three_dim_float(280, 980, 790, "random");

	for (int a = 5; a < 280; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-5][a-4]+D[a][a][a]/E[a][a][a]*B[a][a][a]-A[a][a][a];
	  
	    A[a][a][a]=A[a+3][a][a+4]*C[a][a][a]+B[a][a][a]-E[a][a][a]/D[a][a][a];
	  
	    A[a][a][a]=A[a+1][a+2][a+1]-D[a][a][a]/E[a][a][a];
	  
	    B[a][a][a]=D[a][a][a]/A[a][a][a]-C[a][a][a]*E[a][a][a]+B[a][a][a];
	    C[a][a][a]=D[a-5][a][a-2]/B[a][a][a]*A[a][a][a]-E[a][a][a];
	}

    return 0;
}