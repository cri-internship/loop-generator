#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(210, 680, "zeros");
	float ***A = create_three_dim_float(190, 1000, 250, "zeros");
	float **B = create_two_dim_float(760, 960, "zeros");

	for (int b = 3; b < 680; b++)
	  for (int a = 3; a < 186; a++)
	  {
	    
	     C[a][b]=C[a-3][b-3]+0.363;
	    
	     A[a][b][a]=A[a+4][b+4][a]*C[a][b];
	    
	     A[a][b][a]=B[a][b]*B[a][b];
	  }

    return 0;
}