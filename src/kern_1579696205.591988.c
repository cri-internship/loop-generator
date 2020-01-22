#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(450, 870, "ones");
	float ***C = create_three_dim_float(820, 290, 20, "ones");
	float **D = create_two_dim_float(40, 120, "ones");
	float **A = create_two_dim_float(20, 690, "ones");
	float **E = create_two_dim_float(620, 720, "ones");

	for (int a = 2; a < 15; a++)
	{
	  
	    C[a][a][a]=C[a+4][a+2][a]*D[a][a]+A[a][a]-B[a][a];
	  
	    A[a][a]=A[a+5][a+5]*0.532/C[a][a][a];
	  
	    C[a][a][a]=C[a+1][a+5][a+1]-A[a][a]*B[a][a]+D[a][a]/0.95;
	  
	    C[a][a][a]=D[a][a]-A[a][a]/C[a][a][a];
	    E[a][a]=D[a+5][a+5]*E[a][a]-A[a][a]/C[a][a][a]+B[a][a];
	  
	    D[a][a]=E[a][a]+C[a][a][a]*D[a][a];
	    B[a][a]=E[a][a-2]*0.194-D[a][a];
	}

    return 0;
}