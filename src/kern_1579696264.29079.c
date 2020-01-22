#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(40, "ones");
	double ***A = create_three_dim_double(810, 810, 520, "ones");

	for (int a = 5; a < 40; a++)
	{
	  
	    A[a][a][a]=A[a-2][a][a]*0.192;
	  
	    A[a][a][a]=A[a-5][a-4][a-3]-B[a];
	  
	    A[a][a][a]=A[a+5][a+5][a+5]/B[a];
	  
	    A[a][a][a]=A[a+2][a+1][a+5]-B[a];
	  
	    double var_a=A[a][a][a]-0.195;
	    double var_b=A[a+2][a+1][a+1]+0.783;
	}

    return 0;
}