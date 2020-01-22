#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(350, 140, "ones");
	float *B = create_one_dim_float(770, "ones");
	float *C = create_one_dim_float(530, "ones");

	for (int b = 5; b < 135; b++)
	  for (int a = 4; a < 346; a++)
	  {
	    
	     A[a][b]=A[a-4][b-5]/B[a]+C[a];
	    
	     C[a]=C[a-4]*A[a][b];
	    
	     C[a]=C[a+1]*0.084;
	    
	     C[a]=B[a]*C[a]+A[a][b];
	     A[a][b]=B[a+5]/A[a][b];
	    
	     B[a]=A[a][b]*0.611;
	     B[a]=A[a+4][b+5]-0.366;
	  }

    return 0;
}