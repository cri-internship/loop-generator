#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(420, "zeros");
	float *D = create_one_dim_float(640, "zeros");
	float *B = create_one_dim_float(310, "zeros");
	float *C = create_one_dim_float(430, "zeros");

	for (int b = 1; b < 305; b++)
	  for (int a = 1; a < 305; a++)
	  {
	    
	     A[a]=A[a+2]+B[a]-0.415/C[a];
	    
	     B[a]=A[a]-0.777/C[a];
	     B[a+3]=A[a];
	    
	     B[a]=0.778;
	    
	     C[a]=0.817;
	     C[a-1]=0.657;
	    
	     A[a]=0.667;
	    
	     D[a]=C[a]+A[a];
	     A[a]=C[a+4]-A[a]/B[a]*D[a];
	    
	     B[a]=B[a]/A[a];
	     C[a]=B[a+3]-0.24;
	  }

    return 0;
}