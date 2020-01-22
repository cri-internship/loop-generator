#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(470, 40, 460, "ones");
	float **C = create_two_dim_float(260, 850, "ones");
	float ***D = create_three_dim_float(730, 50, 50, "ones");
	float ***E = create_three_dim_float(660, 580, 670, "ones");
	float ***B = create_three_dim_float(1000, 610, 640, "ones");

	for (int a = 4; a < 260; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-4][a-4]+0.445;
	  
	    A[a][a][a]=D[a][a][a];
	  
	    B[a][a][a]=C[a][a]-B[a][a][a]/A[a][a][a]*A[a][a][a];
	    A[a][a][a]=C[a-2][a-4]/E[a][a][a];
	  
	    C[a][a]=B[a][a][a]-A[a][a][a]+D[a][a][a]/C[a][a];
	    E[a][a][a]=B[a+1][a+5][a+4]/A[a][a][a];
	}

    return 0;
}