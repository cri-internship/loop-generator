#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(610, 350, 440, "random");
	double ***B = create_three_dim_double(10, 800, 200, "random");
	double **D = create_two_dim_double(920, 660, "random");
	double **C = create_two_dim_double(860, 180, "random");

	for (int a = 5; a < 860; a++)
	{
	  
	    C[a][a]=A[a][a][a]+B[a][a][a]/D[a][a];
	    C[a-4][a-5]=A[a][a][a]*D[a][a]-B[a][a][a];
	  
	    double var_a=D[a][a]/0.14;
	    double var_b=D[a-5][a-4]*0.228;
	}

    return 0;
}