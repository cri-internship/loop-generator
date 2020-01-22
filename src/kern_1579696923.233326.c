#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(230, 320, "random");
	float **A = create_two_dim_float(60, 80, "random");

	for (int b = 3; b < 75; b++)
	  for (int a = 4; a < 57; a++)
	  {
	    
	     B[a][b]=B[a-4][b-3]/0.871;
	    
	     A[a][b]=A[a+3][b+5]*0.296;
	    
	     A[a][b]=A[a][b]*B[a][b];
	     B[a][b]=A[a+3][b+1]*B[a][b];
	  }

    return 0;
}