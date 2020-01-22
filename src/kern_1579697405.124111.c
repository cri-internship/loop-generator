#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(980, "ones");
	float **B = create_two_dim_float(220, 560, "ones");
	float *A = create_one_dim_float(750, "ones");
	float **D = create_two_dim_float(460, 150, "ones");
	float **E = create_two_dim_float(170, 270, "ones");

	for (int a = 0; a < 975; a++)
	{
	  
	    C[a]=C[a+5]-E[a][a]*A[a]/D[a][a];
	}

    return 0;
}