#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(860, 680, "random");
	float ***B = create_three_dim_float(550, 660, 850, "random");
	float **C = create_two_dim_float(610, 140, "random");

	for (int a = 4; a < 605; a++)
	{
	  
	    C[a][a]=C[a-3][a-4]+A[a][a]-0.405;
	  
	    A[a][a]=A[a+2][a+4]/C[a][a]+B[a][a][a];
	  
	    C[a][a]=C[a+5][a+4]+0.427;
	  
	    A[a][a]=A[a+1][a+5]*B[a][a][a]-C[a][a];
	}

    return 0;
}