#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(540, "random");
	double *A = create_one_dim_double(910, "random");

	for (int a = 4; a < 540; a++)
	{
	  
	    A[a]=A[a-1]*0.493;
	  
	    A[a]=A[a+4]/B[a];
	  
	    B[a]=A[a];
	    B[a]=0.145;
	  
	    A[a]=A[a]/0.425;
	    B[a]=A[a-4]/0.084;
	  
	    double var_a=B[a]-0.003;
	  
	    double var_e=A[a]-0.476;
	    double var_f=A[a+1]/0.889;
	}

    return 0;
}