#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(560, "random");
	float **A = create_two_dim_float(580, 770, "random");
	float *C = create_one_dim_float(930, "random");

	for (int b = 2; b < 770; b++)
	  for (int a = 3; a < 556; a++)
	  {
	    
	     B[a]=B[a+4]/0.798;
	    
	     B[a]=B[a+2]+0.934;
	    
	     C[a]=C[a+4]-0.808;
	    
	     A[a][b]=C[a]*B[a];
	     A[a-3][b-2]=B[a]-0.141;
	    
	     C[a]=0.577;
	    
	     C[a]=C[a]-A[a][b];
	  }

    return 0;
}