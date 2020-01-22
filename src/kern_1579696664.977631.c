#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(360, 160, 980, "random");
	double ***E = create_three_dim_double(600, 150, 600, "random");
	double ***C = create_three_dim_double(410, 680, 720, "random");
	double ***B = create_three_dim_double(510, 700, 470, "random");
	double ***D = create_three_dim_double(210, 650, 960, "random");

	for (int a = 5; a < 205; a++)
	{
	  
	    D[a][a][a]=D[a-3][a-2][a-5]+0.563;
	  
	    C[a][a][a]=C[a+2][a][a+4]+0.731;
	  
	    B[a][a][a]=B[a+4][a][a+4]+0.192;
	  
	    E[a][a][a]=B[a][a][a]*A[a][a][a]+C[a][a][a]-D[a][a][a];
	    E[a-1][a-1][a-3]=D[a][a][a]/A[a][a][a]-B[a][a][a]*C[a][a][a];
	  
	    A[a][a][a]=E[a][a][a];
	    A[a+1][a+3][a+4]=E[a][a][a]-B[a][a][a]*C[a][a][a]+D[a][a][a];
	  
	    C[a][a][a]=E[a][a][a]/C[a][a][a]*D[a][a][a];
	    B[a][a][a]=E[a+1][a+1][a+4]/D[a][a][a]*B[a][a][a];
	  
	    A[a][a][a]=D[a][a][a]/E[a][a][a];
	    E[a][a][a]=D[a+1][a+2][a+5]/A[a][a][a];
	}

    return 0;
}