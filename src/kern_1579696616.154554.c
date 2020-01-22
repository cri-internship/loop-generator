#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(90, 440, "ones");
	double **C = create_two_dim_double(910, 240, "ones");
	double ***B = create_three_dim_double(470, 830, 230, "ones");
	double *D = create_one_dim_double(540, "ones");
	double ***E = create_three_dim_double(430, 430, 780, "ones");

	for (int a = 4; a < 88; a++)
	{
	  
	    D[a]=D[a-4]+0.981;
	  
	    A[a][a]=A[a+2][a+2]+D[a]/E[a][a][a]*0.207;
	}

    return 0;
}