#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(910, 690, "zeros");
	double **A = create_two_dim_double(310, 960, "zeros");

	for (int b = 5; b < 690; b++)
	  for (int a = 4; a < 308; a++)
	  {
	    
	     B[a][b]=B[a-2][b-4]+0.787;
	    
	     A[a][b]=A[a-4][b-4]/0.947;
	    
	     B[a][b]=B[a-1][b-2]+A[a][b];
	    
	     A[a][b]=A[a+2][b+3]/0.874;
	    
	     A[a][b]=B[a][b]*A[a][b];
	     B[a][b]=B[a-2][b-5]-A[a][b];
	  }

    return 0;
}