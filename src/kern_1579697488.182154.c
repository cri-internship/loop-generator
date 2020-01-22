#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(600, 970, 290, "zeros");
	double ***B = create_three_dim_double(840, 590, 570, "zeros");

	for (int a = 5; a < 596; a++)
	{
	  
	    B[a][a][a]=B[a][a][a]/0.058;
	    A[a][a][a]=B[a+4][a+4][a+4]+A[a][a][a];
	  
	    B[a][a][a]=B[a][a][a]*A[a][a][a];
	    A[a][a][a]=B[a][a-1][a-1]-A[a][a][a];
	  
	    double var_a=A[a][a][a]*0.969;
	    double var_b=A[a+4][a+2][a+1]-0.51;
	  
	    A[a][a][a]=A[a][a][a]*B[a][a][a];
	    B[a][a][a]=A[a-2][a-1][a-5]/B[a][a][a];
	  
	    double var_c=B[a][a][a]-0.703;
	    double var_d=B[a-4][a][a-3]-0.404;
	  
	    A[a][a][a]=B[a][a][a]+A[a][a][a];
	    B[a][a][a]=B[a-4][a-5][a-2]+A[a][a][a];
	}

    return 0;
}