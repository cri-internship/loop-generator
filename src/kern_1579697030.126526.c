#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(600, "zeros");
	float **C = create_two_dim_float(100, 20, "zeros");
	float *B = create_one_dim_float(880, "zeros");

	for (int b = 0; b < 16; b++)
	  for (int a = 0; a < 96; a++)
	  {
	    
	     A[a]=C[a][b]-A[a];
	     C[a][b]=B[a];
	    
	     C[a][b]=C[a+4][b+3]-B[a]*A[a];
	    
	     B[a]=0.313/C[a][b];
	     B[a+3]=C[a][b];
	    
	     C[a][b]=C[a][b]+0.631;
	     B[a]=C[a+4][b+4]-A[a]*B[a];
	  }

    return 0;
}