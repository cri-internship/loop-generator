#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(570, 530, "zeros");
	float **B = create_two_dim_float(60, 400, "zeros");

	for (int b = 2; b < 400; b++)
	  for (int a = 3; a < 60; a++)
	  {
	    
	     B[a][b]=B[a-3][b-2]*A[a][b];
	    
	     A[a][b]=B[a][b]/A[a][b];
	     B[a][b]=B[a-1][b-1]-A[a][b];
	  }

    return 0;
}