#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(940, 730, 530, "random");
	double **C = create_two_dim_double(720, 520, "random");
	double ***B = create_three_dim_double(280, 810, 170, "random");
	double ***D = create_three_dim_double(110, 20, 530, "random");
	double ***E = create_three_dim_double(870, 70, 970, "random");

	for (int a = 5; a < 110; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-2][a-2]*A[a][a][a]-E[a][a][a]/B[a][a][a]+C[a][a];
	  
	    B[a][a][a]=B[a-5][a-1][a-5]/D[a][a][a]*0.205-C[a][a]+E[a][a][a];
	  
	    E[a][a][a]=E[a-1][a-4][a-2]*D[a][a][a];
	  
	    C[a][a]=C[a+1][a]+0.247;
	  
	    B[a][a][a]=0.594;
	}

    return 0;
}