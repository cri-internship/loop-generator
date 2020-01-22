#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(910, 140, 930, "random");
	double **D = create_two_dim_double(530, 410, "random");
	double **B = create_two_dim_double(960, 400, "random");
	double ***C = create_three_dim_double(750, 870, 990, "random");
	double ***E = create_three_dim_double(360, 660, 700, "random");

	for (int a = 5; a < 355; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-1][a-4]+0.246;
	  
	    D[a][a]=D[a-4][a-1]+0.601*B[a][a]/E[a][a][a]-A[a][a][a];
	  
	    C[a][a][a]=C[a+2][a+4][a+5]+0.862-B[a][a]/E[a][a][a];
	  
	    D[a][a]=0.399;
	  
	    C[a][a][a]=E[a][a][a]-C[a][a][a];
	    E[a][a][a]=E[a][a+5][a+2]-A[a][a][a];
	}

    return 0;
}