#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(990, 750, "random");
	double ***D = create_three_dim_double(800, 710, 400, "random");
	double **A = create_two_dim_double(820, 180, "random");
	double ***C = create_three_dim_double(440, 240, 680, "random");
	double **B = create_two_dim_double(80, 290, "random");

	for (int a = 0; a < 78; a++)
	{
	  
	    A[a][a]=0.669;
	    float  var_a=A[a][a]/0.769;
	  
	    A[a][a]=A[a+3][a+4]+0.256;
	  
	    B[a][a]=E[a][a];
	    B[a+2][a+2]=C[a][a][a]+A[a][a]*D[a][a][a];
	  
	    C[a][a][a]=0.6;
	    C[a+3][a+2][a+2]=0.387;
	}

    return 0;
}