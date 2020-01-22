#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(800, 190, "random");
	double *D = create_one_dim_double(60, "random");
	double ***A = create_three_dim_double(1000, 30, 540, "random");
	double **B = create_two_dim_double(580, 430, "random");

	for (int a = 4; a < 799; a++)
	{
	  
	    D[a]=A[a][a][a]/C[a][a];
	    B[a][a]=A[a-3][a-2][a-4]+D[a]/B[a][a];
	  
	    C[a][a]=C[a][a]+A[a][a][a]/B[a][a]*A[a][a][a];
	    A[a][a][a]=C[a+1][a+1]/B[a][a];
	}

    return 0;
}