#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(290, "ones");
	double *A = create_one_dim_double(210, "ones");

	for (int a = 3; a < 205; a++)
	{
	  
	    A[a]=A[a+5]+B[a];
	  
	    B[a]=0.735;
	    B[a]=0.022;
	  
	    A[a]=0.863;
	  
	    double var_a=A[a]/0.351;
	    double var_b=A[a]*0.887;
	  
	    B[a]=B[a]*A[a];
	    A[a]=B[a+1]*A[a];
	}

    return 0;
}