#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(760, "random");
	double ***C = create_three_dim_double(300, 250, 870, "random");
	double **D = create_two_dim_double(300, 280, "random");
	double *A = create_one_dim_double(370, "random");

	for (int a = 5; a < 296; a++)
	{
	  
	    B[a]=B[a-5]*0.583;
	  
	    D[a][a]=D[a][a+1]*0.031;
	  
	    C[a][a][a]=C[a+4][a+1][a+2]+B[a];
	  
	    double var_a=B[a]-0.549;
	    double var_b=B[a+1]*0.897;
	}

    return 0;
}