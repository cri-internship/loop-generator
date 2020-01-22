#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(10, 20, "zeros");
	float ***A = create_three_dim_float(460, 270, 670, "zeros");

	for (int b = 5; b < 17; b++)
	  for (int a = 5; a < 5; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-5][a-3]+B[a][b];
	    
	     B[a][b]=B[a+5][b]/0.474;
	    
	     A[a][b][a]=A[a][b+2][a+2]*0.715;
	    
	     B[a][b]=B[a][b+2]+0.432;
	    
	     A[a][b][a]=A[a][b][a]/0.392;
	     B[a][b]=A[a-5][b-3][a-1]-B[a][b];
	    
	     A[a][b][a]=B[a][b]*A[a][b][a];
	     B[a][b]=B[a][b+3]*0.169;
	  }

    return 0;
}