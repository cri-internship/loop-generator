#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(380, 450, "random");
	float *A = create_one_dim_float(510, "random");
	float **C = create_two_dim_float(660, 300, "random");

	for (int b = 3; b < 297; b++)
	  for (int a = 5; a < 510; a++)
	  {
	    
	     A[a]=A[a-4]*B[a][b]+C[a][b];
	    
	     C[a][b]=C[a+2][b+3]*0.144;
	    
	     C[a][b]=A[a]-A[a];
	    
	     float var_a=A[a]-0.172;
	     float var_b=A[a-5]+0.934;
	    
	     float var_c=C[a][b]*0.422;
	     float var_d=C[a-5][b-3]+0.277;
	  }

    return 0;
}