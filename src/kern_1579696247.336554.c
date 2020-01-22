#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(290, 440, 760, "random");
	double ***A = create_three_dim_double(830, 220, 130, "random");
	double **B = create_two_dim_double(980, 250, "random");
	double ***C = create_three_dim_double(270, 400, 90, "random");
	double **E = create_two_dim_double(110, 560, "random");

	for (int a = 4; a < 107; a++)
	{
	  
	    D[a][a][a]=D[a+3][a+2][a+5]/E[a][a];
	  
	    E[a][a]=E[a+3][a+3]+D[a][a][a];
	  
	    C[a][a][a]=0.417;
	    C[a][a+5][a+3]=0.226;
	  
	    C[a][a][a]=0.842;
	  
	    A[a][a][a]=B[a][a]-C[a][a][a]/D[a][a][a];
	    A[a-3][a-4][a]=B[a][a]+C[a][a][a]/0.366-D[a][a][a];
	  
	    D[a][a][a]=C[a][a][a]-A[a][a][a];
	    C[a][a][a]=C[a+4][a+2][a+3]-A[a][a][a]/D[a][a][a]*E[a][a];
	}

    return 0;
}