#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(690, "random");
	double *C = create_one_dim_double(230, "random");
	double ***A = create_three_dim_double(990, 980, 940, "random");

	for (int a = 5; a < 230; a++)
	{
	  
	    C[a]=C[a-5]/B[a];
	  
	    B[a]=0.784;
	    float  var_a=B[a]*0.992;
	  
	    C[a]=0.691;
	  
	    B[a]=A[a][a][a]/C[a];
	  
	    double var_b=B[a]+0.049;
	    double var_c=B[a+2]/0.881;
	}

    return 0;
}