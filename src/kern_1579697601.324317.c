#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(890, "ones");
	double **B = create_two_dim_double(950, 520, "ones");

	for (int a = 5; a < 887; a++)
	{
	  
	    B[a][a]=B[a-2][a-5]+0.343;
	  
	    B[a][a]=B[a+5][a+1]-0.138;
	  
	    A[a]=0.454;
	    A[a+1]=0.994;
	  
	    B[a][a]=B[a][a]/A[a];
	    A[a]=B[a][a+4]/A[a];
	  
	    B[a][a]=A[a]/B[a][a];
	    B[a][a]=A[a+3]+B[a][a];
	  
	    A[a]=A[a]-B[a][a];
	    A[a]=A[a+2]*B[a][a];
	}

    return 0;
}