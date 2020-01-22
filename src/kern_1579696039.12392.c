#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(730, 830, 650, "random");
	double ***A = create_three_dim_double(940, 580, 220, "random");
	double **C = create_two_dim_double(230, 70, "random");
	double **D = create_two_dim_double(750, 530, "random");

	for (int a = 4; a < 730; a++)
	{
	  
	    double var_a=B[a][a][a]+0.81;
	    double var_b=B[a-4][a][a-4]*0.341;
	}

    return 0;
}