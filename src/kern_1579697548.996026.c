#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(280, 510, "ones");
	float *A = create_one_dim_float(580, "ones");
	float *C = create_one_dim_float(530, "ones");
	float **D = create_two_dim_float(590, 230, "ones");

	for (int a = 4; a < 530; a++)
	{
	  
	    C[a]=C[a-4]+D[a][a]/B[a][a]*A[a];
	  
	    A[a]=0.096;
	    float  var_a=A[a]/0.667;
	  
	    A[a]=A[a+5]*C[a]-C[a];
	  
	    D[a][a]=0.02;
	    D[a+1][a+2]=0.455;
	  
	    float var_b=A[a]/0.659;
	    float var_c=A[a+4]*0.791;
	}

    return 0;
}