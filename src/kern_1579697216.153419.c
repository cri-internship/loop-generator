#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(740, 170, 10, "zeros");
	float **B = create_two_dim_float(900, 350, "zeros");
	float ***E = create_three_dim_float(220, 420, 730, "zeros");
	float ***A = create_three_dim_float(820, 240, 820, "zeros");
	float ***D = create_three_dim_float(870, 540, 880, "zeros");

	for (int a = 5; a < 218; a++)
	{
	  
	    B[a][a]=B[a-2][a]-A[a][a][a]/E[a][a][a]+0.708;
	  
	    C[a][a][a]=C[a+5][a+5][a+5]/0.741;
	  
	    B[a][a]=D[a][a][a]/A[a][a][a]*E[a][a][a];
	  
	    C[a][a][a]=0.703;
	  
	    C[a][a][a]=D[a][a][a]+B[a][a];
	    B[a][a]=D[a][a][a-1]-E[a][a][a]*C[a][a][a];
	  
	    D[a][a][a]=E[a][a][a]*A[a][a][a]/B[a][a]+C[a][a][a]-D[a][a][a];
	    E[a][a][a]=E[a+1][a+2][a]+A[a][a][a]/D[a][a][a]-B[a][a];
	}

    return 0;
}