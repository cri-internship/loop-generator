#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(320, 970, 60, "ones");
	double **A = create_two_dim_double(70, 270, "ones");
	double **D = create_two_dim_double(950, 840, "ones");
	double ***B = create_three_dim_double(740, 140, 610, "ones");

	for (int a = 5; a < 70; a++)
	{
	  
	    double var_a=A[a][a]-0.185;
	    double var_b=A[a-5][a-5]*0.055;
	}

    return 0;
}