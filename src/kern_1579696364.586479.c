#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(480, 390, "random");
	double **D = create_two_dim_double(850, 340, "random");
	double ***B = create_three_dim_double(160, 380, 530, "random");
	double *A = create_one_dim_double(940, "random");

	for (int a = 0; a < 935; a++)
	{
	  
	    double var_a=A[a]+0.215;
	    double var_b=A[a+5]+0.751;
	}

    return 0;
}