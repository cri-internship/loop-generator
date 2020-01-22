#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(400, "ones");
	double *D = create_one_dim_double(690, "ones");
	double *C = create_one_dim_double(410, "ones");
	double *A = create_one_dim_double(370, "ones");
	double *E = create_one_dim_double(300, "ones");

	for (int a = 4; a < 296; a++)
	{
	  
	    C[a]=C[a+5]/0.484;
	  
	    double var_a=D[a]*0.924;
	    double var_b=D[a-4]/0.517;
	  
	    C[a]=E[a]/B[a]-C[a]+A[a]*D[a];
	    A[a]=E[a+4]-C[a]*A[a]/D[a];
	}

    return 0;
}