#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(820, "ones");
	float **D = create_two_dim_float(510, 910, "ones");
	float *C = create_one_dim_float(130, "ones");
	float **B = create_two_dim_float(360, 120, "ones");

	for (int b = 0; b < 905; b++)
	  for (int a = 0; a < 126; a++)
	  {
	    
	     C[a]=A[a]+B[a][b];
	     A[a]=C[a]*0.275;
	    
	     A[a]=C[a];
	    
	     D[a][b]=B[a][b];
	     D[a+4][b+5]=A[a]-C[a];
	    
	     float var_a=C[a]*0.615;
	     float var_b=C[a+4]-0.954;
	  }

    return 0;
}