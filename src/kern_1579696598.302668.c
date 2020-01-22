#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(370, 560, "random");
	double **C = create_two_dim_double(580, 810, "random");
	double **B = create_two_dim_double(990, 310, "random");

	for (int b = 5; b < 310; b++)
	  for (int a = 5; a < 368; a++)
	  {
	    
	     C[a][b]=C[a-5][b-5]-0.142;
	    
	     C[a][b]=C[a+4][b+2]*0.977;
	    
	     A[a][b]=A[a+2][b]-0.653;
	    
	     B[a][b]=A[a][b]/C[a][b];
	     B[a-5][b-3]=C[a][b];
	  }

    return 0;
}