#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(840, "random");
	double **E = create_two_dim_double(750, 740, "random");
	double **D = create_two_dim_double(140, 530, "random");
	double *C = create_one_dim_double(910, "random");
	double ***B = create_three_dim_double(270, 940, 670, "random");

	for (int a = 5; a < 747; a++)
	{
	  
	    E[a][a]=E[a+1][a+1]-0.911;
	  
	    B[a][a][a]=C[a]*D[a][a]/E[a][a]-B[a][a][a];
	    C[a]=A[a]/B[a][a][a];
	  
	    A[a]=C[a]-C[a]*D[a][a];
	    A[a-5]=C[a]/B[a][a][a];
	  
	    E[a][a]=0.846;
	}

    return 0;
}