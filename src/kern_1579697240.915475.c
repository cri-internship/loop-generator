#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(940, 220, 390, "random");
	double *D = create_one_dim_double(540, "random");
	double ***C = create_three_dim_double(640, 120, 590, "random");
	double **E = create_two_dim_double(440, 240, "random");
	double ***A = create_three_dim_double(50, 770, 620, "random");

	for (int a = 5; a < 48; a++)
	{
	  
	    E[a][a]=E[a-2][a-1]/0.65;
	  
	    E[a][a]=E[a][a-5]+C[a][a][a]*B[a][a][a]/A[a][a][a]-D[a];
	  
	    E[a][a]=E[a+2][a]+0.949;
	  
	    A[a][a][a]=0.952;
	    A[a+2][a+2][a+2]=0.215;
	  
	    B[a][a][a]=E[a][a];
	    B[a][a-4][a-1]=E[a][a]/A[a][a][a]*C[a][a][a]-D[a];
	}

    return 0;
}