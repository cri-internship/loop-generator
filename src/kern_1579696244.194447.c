#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(720, 100, "zeros");
	float **A = create_two_dim_float(400, 710, "zeros");
	float **B = create_two_dim_float(30, 410, "zeros");

	for (int b = 5; b < 100; b++)
	  for (int a = 5; a < 30; a++)
	  {
	    
	     B[a][b]=B[a][b-3]-0.985+A[a][b];
	    
	     A[a][b]=A[a-5][b-3]*B[a][b];
	    
	     C[a][b]=C[a-3][b-3]+B[a][b]-A[a][b];
	    
	     C[a][b]=C[a-5][b-4]+0.494;
	    
	     A[a][b]=C[a][b];
	  }

    return 0;
}