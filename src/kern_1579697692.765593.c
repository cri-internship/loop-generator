#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(110, 540, 330, "random");
	double **B = create_two_dim_double(850, 810, "random");

	for (int a = 5; a < 105; a++)
	{
	  
	    B[a][a]=B[a-3][a-3]*A[a][a][a];
	  
	    A[a][a][a]=A[a+1][a+5][a]/0.073;
	  
	    A[a][a][a]=A[a+1][a+5][a+2]*0.245;
	  
	    B[a][a]=0.884;
	  
	    double var_a=A[a][a][a]-0.785;
	    double var_b=A[a-3][a-2][a-5]*0.876;
	  
	    B[a][a]=A[a][a][a]*B[a][a];
	    A[a][a][a]=A[a-1][a][a-3]+0.472;
	}

    return 0;
}