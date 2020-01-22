#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(690, 650, "random");
	double ***A = create_three_dim_double(850, 760, 940, "random");
	double *C = create_one_dim_double(770, "random");
	double **D = create_two_dim_double(610, 370, "random");
	double ***B = create_three_dim_double(770, 720, 1000, "random");

	for (int a = 4; a < 770; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-3][a-3]/D[a][a];
	  
	    A[a][a][a]=A[a][a+1][a+3]*0.154;
	  
	    A[a][a][a]=B[a][a][a];
	}

    return 0;
}