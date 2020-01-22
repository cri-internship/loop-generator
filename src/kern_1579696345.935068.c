#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(340, 660, 540, "random");

	for (int a = 0; a < 336; a++)
	{
	  
	    double var_a=A[a][a][a]-0.646;
	    double var_b=A[a+4][a+3][a+1]-0.576;
	}

    return 0;
}