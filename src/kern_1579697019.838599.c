#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(810, 930, "random");
	float **B = create_two_dim_float(290, 140, "random");

	for (int b = 5; b < 139; b++)
	  for (int a = 3; a < 288; a++)
	  {
	    
	     B[a][b]=B[a-2][b-5]*A[a][b];
	    
	     B[a][b]=0.702;
	  }

    return 0;
}