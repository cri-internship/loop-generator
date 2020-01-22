#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(170, 570, 280, "random");
	double *E = create_one_dim_double(310, "random");
	double ***A = create_three_dim_double(990, 790, 150, "random");
	double *C = create_one_dim_double(770, "random");
	double ***B = create_three_dim_double(620, 850, 40, "random");

	for (int a = 5; a < 305; a++)
	{
	  
	    E[a]=E[a-5]-D[a][a][a]+C[a]*B[a][a][a];
	  
	    E[a]=E[a+5]*A[a][a][a]+C[a]/D[a][a][a]-A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a+1]-E[a]*E[a]+B[a][a][a]/D[a][a][a];
	  
	    A[a][a][a]=A[a+1][a+4][a+3]/0.259;
	  
	    C[a]=C[a+4]/0.533;
	  
	    B[a][a][a]=0.273+E[a];
	    B[a+4][a+5][a+3]=0.353;
	  
	    double var_a=E[a]-0.732;
	}

    return 0;
}