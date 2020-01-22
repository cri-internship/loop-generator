#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(860, "ones");
	double ***B = create_three_dim_double(960, 690, 790, "ones");
	double *C = create_one_dim_double(600, "ones");

	for (int a = 5; a < 598; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-4][a-5]*0.547;
	  
	    C[a]=C[a+2]/0.499;
	  
	    B[a][a][a]=A[a]*B[a][a][a]/0.76;
	    A[a]=B[a][a][a];
	  
	    A[a]=0.232;
	  
	    double var_a=B[a][a][a]+0.104;
	    double var_b=B[a+2][a+2][a]/0.377;
	}

    return 0;
}