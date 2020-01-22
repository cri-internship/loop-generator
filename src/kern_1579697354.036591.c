#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(830, "zeros");
	float *D = create_one_dim_float(220, "zeros");
	float **A = create_two_dim_float(830, 420, "zeros");
	float **B = create_two_dim_float(490, 450, "zeros");

	for (int b = 4; b < 416; b++)
	  for (int a = 5; a < 216; a++)
	  {
	    
	     B[a][b]=B[a-3][b-4]/0.788;
	    
	     D[a]=D[a+4]-B[a][b]/A[a][b];
	    
	     D[a]=D[a+2]/C[a]+A[a][b];
	    
	     D[a]=0.924;
	    
	     A[a][b]=0.217;
	     A[a+3][b+2]=0.914;
	    
	     B[a][b]=A[a][b]+D[a]/D[a]*B[a][b];
	     C[a]=A[a+3][b+4]/0.463*D[a]-B[a][b];
	  }

    return 0;
}