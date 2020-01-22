#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(400, 330, "random");
	double **B = create_two_dim_double(880, 700, "random");

	for (int b = 1; b < 327; b++)
	  for (int a = 4; a < 398; a++)
	  {
	    
	     A[a][b]=A[a+2][b+3]/B[a][b];
	    
	     B[a][b]=0.67;
	     B[a-4][b-1]=0.588;
	    
	     B[a][b]=0.357;
	    
	     B[a][b]=A[a][b]*B[a][b];
	     A[a][b]=A[a+2][b+1]+B[a][b];
	  }

    return 0;
}