#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(750, 770, "random");
	float **A = create_two_dim_float(630, 720, "random");

	for (int b = 4; b < 720; b++)
	  for (int a = 4; a < 630; a++)
	  {
	    
	     B[a][b]=B[a-3][b-1]*A[a][b];
	    
	     B[a][b]=B[a-2][b-3]/0.285;
	    
	     A[a][b]=0.539;
	     A[a-1][b]=0.12;
	    
	     B[a][b]=B[a][b]/A[a][b];
	     A[a][b]=B[a-4][b-4]*A[a][b];
	  }

    return 0;
}