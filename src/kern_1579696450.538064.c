#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(440, "ones");
	double ***A = create_three_dim_double(560, 720, 70, "ones");
	double ***B = create_three_dim_double(570, 260, 860, "ones");
	double *D = create_one_dim_double(650, "ones");
	double **E = create_two_dim_double(720, 630, "ones");

	for (int a = 5; a < 560; a++)
	{
	  
	    D[a]=D[a-1]*E[a][a];
	  
	    A[a][a][a]=A[a][a][a-3]/D[a]+0.537;
	  
	    D[a]=D[a-5]/B[a][a][a]+0.384-C[a];
	  
	    E[a][a]=E[a][a+1]-0.117;
	  
	    E[a][a]=0.724;
	}

    return 0;
}