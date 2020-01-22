#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(300, "ones");

	for (int a = 5; a < 298; a++)
	{
	  
	    A[a]=0.945;
	    float  var_a=A[a]*0.542;
	  
	    A[a]=A[a+2]*0.836;
	  
	    double var_b=A[a]/0.354;
	    double var_c=A[a-1]-0.029;
	}

    return 0;
}