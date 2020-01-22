#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(510, 430, "ones");
	float *D = create_one_dim_float(520, "ones");
	float **B = create_two_dim_float(320, 700, "ones");
	float **A = create_two_dim_float(250, 850, "ones");

	for (int b = 0; b < 425; b++)
	  for (int a = 4; a < 320; a++)
	  {
	    
	     D[a]=D[a-4]-C[a][b];
	    
	     C[a][b]=C[a+5][b+5]-0.254;
	    
	     D[a]=D[a+5]*A[a][b];
	    
	     B[a][b]=B[a][b+2]-D[a];
	    
	     A[a][b]=C[a][b]-B[a][b]+A[a][b]/D[a];
	     B[a][b]=C[a+5][b+1]/D[a]+A[a][b]*B[a][b];
	  }

    return 0;
}