#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(950, "zeros");
	float **B = create_two_dim_float(360, 390, "zeros");

	for (int b = 2; b < 386; b++)
	  for (int a = 4; a < 355; a++)
	  {
	    
	     A[a]=0.375;
	     float  var_a=A[a]+0.593;
	    
	     B[a][b]=B[a-3][b-2]*0.52;
	    
	     A[a]=A[a-1]*0.786;
	    
	     B[a][b]=B[a+4][b+4]+0.213;
	    
	     B[a][b]=B[a][b]-A[a];
	     A[a]=B[a+3][b]*A[a];
	    
	     B[a][b]=B[a][b]+A[a];
	     A[a]=B[a+5][b]+A[a];
	    
	     A[a]=A[a]*0.0;
	     B[a][b]=A[a-4]-B[a][b];
	  }

    return 0;
}