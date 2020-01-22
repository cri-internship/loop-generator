#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(870, 230, 700, "random");
	double **B = create_two_dim_double(740, 140, "random");
	double **A = create_two_dim_double(280, 650, "random");
	double *C = create_one_dim_double(550, "random");

	for (int a = 5; a < 740; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-5][a-4]/C[a]*0.572;
	  
	    B[a][a]=0.345;
	    B[a-5][a-3]=0.906;
	}

    return 0;
}