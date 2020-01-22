#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(30, "random");
	double **A = create_two_dim_double(70, 300, "random");

	for (int a = 5; a < 25; a++)
	{
	  
	    B[a]=B[a-5]*A[a][a];
	  
	    B[a]=B[a-1]/0.161;
	  
	    B[a]=B[a+4]/A[a][a];
	  
	    B[a]=B[a+5]-0.242;
	  
	    A[a][a]=A[a+1][a]*B[a];
	  
	    A[a][a]=0.458;
	}

    return 0;
}