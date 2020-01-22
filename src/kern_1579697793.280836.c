#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(420, "random");
	double **B = create_two_dim_double(490, 490, "random");
	double ***A = create_three_dim_double(960, 1000, 230, "random");
	double **C = create_two_dim_double(850, 890, "random");

	for (int a = 5; a < 485; a++)
	{
	  
	    B[a][a]=B[a+5][a+5]-0.007;
	  
	    B[a][a]=A[a][a][a]*C[a][a]+D[a];
	    A[a][a][a]=A[a-2][a][a-5]/B[a][a]-C[a][a]+D[a];
	}

    return 0;
}