#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(310, 400, 940, "zeros");
	float **B = create_two_dim_float(200, 390, "zeros");

	for (int b = 5; b < 385; b++)
	  for (int a = 3; a < 197; a++)
	  {
	    
	     A[a][b][a]=A[a+1][b][a+4]/0.137;
	    
	     B[a][b]=B[a+3][b+5]-0.735;
	    
	     A[a][b][a]=A[a+2][b+5][a+3]+B[a][b];
	    
	     A[a][b][a]=A[a+5][b+1][a+4]/0.986;
	    
	     B[a][b]=0.288;
	    
	     A[a][b][a]=A[a][b][a]+B[a][b];
	     B[a][b]=A[a+5][b+3][a+3]*B[a][b];
	  }

    return 0;
}