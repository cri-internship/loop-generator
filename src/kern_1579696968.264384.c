#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(310, 180, "ones");
	float **B = create_two_dim_float(270, 700, "ones");
	float **A = create_two_dim_float(840, 570, "ones");

	for (int b = 2; b < 175; b++)
	  for (int a = 5; a < 266; a++)
	  {
	    
	     C[a][b]=C[a+1][b+5]*A[a][b]+B[a][b];
	    
	     B[a][b]=B[a+1][b+5]-0.545;
	    
	     B[a][b]=0.915;
	    
	     C[a][b]=0.837;
	    
	     C[a][b]=C[a][b]*0.0;
	     B[a][b]=C[a-2][b]+0.455;
	    
	     A[a][b]=C[a][b]-A[a][b]*B[a][b];
	     C[a][b]=C[a+3][b+5]/B[a][b];
	  }

    return 0;
}