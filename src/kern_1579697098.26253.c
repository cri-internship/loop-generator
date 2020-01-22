#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(690, "zeros");
	double ***D = create_three_dim_double(130, 170, 530, "zeros");
	double *A = create_one_dim_double(590, "zeros");
	double *B = create_one_dim_double(830, "zeros");

	for (int a = 0; a < 125; a++)
	{
	  
	    C[a]=0.932;
	    float  var_a=C[a]*0.352;
	  
	    D[a][a][a]=D[a+2][a+2][a+5]+0.433*A[a]/B[a];
	}

    return 0;
}