#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(380, 260, 440, "ones");
	double ***A = create_three_dim_double(880, 660, 460, "ones");
	double **B = create_two_dim_double(470, 200, "ones");
	double ***D = create_three_dim_double(650, 30, 970, "ones");
	double *E = create_one_dim_double(570, "ones");

	for (int a = 5; a < 380; a++)
	{
	  
	    E[a]=E[a-3]+B[a][a]*C[a][a][a];
	  
	    C[a][a][a]=0.777;
	    C[a-3][a-5][a-1]=0.816;
	  
	    E[a]=0.483;
	  
	    A[a][a][a]=0.278;
	    A[a][a+1][a+4]=0.405;
	  
	    double var_a=A[a][a][a]+0.787;
	    double var_b=A[a-4][a-1][a-2]*0.831;
	  
	    A[a][a][a]=D[a][a][a]/A[a][a][a]*E[a];
	    B[a][a]=D[a+5][a+5][a]/E[a];
	}

    return 0;
}