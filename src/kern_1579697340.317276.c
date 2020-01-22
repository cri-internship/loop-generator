#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(450, 300, "random");
	double **D = create_two_dim_double(80, 290, "random");
	double ***C = create_three_dim_double(120, 640, 300, "random");
	double **A = create_two_dim_double(940, 600, "random");
	double *B = create_one_dim_double(150, "random");

	for (int a = 4; a < 78; a++)
	{
	  
	    C[a][a][a]=B[a]*0.282+D[a][a]-E[a][a];
	    C[a-3][a-2][a-4]=B[a];
	  
	    D[a][a]=0.374;
	    D[a][a+2]=0.206;
	}

    return 0;
}