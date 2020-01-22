#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(620, 280, "ones");
	float **A = create_two_dim_float(20, 370, "ones");

	for (int b = 1; b < 280; b++)
	  for (int a = 3; a < 15; a++)
	  {
	    
	     A[a][b]=A[a+2][b+2]-B[a][b];
	    
	     A[a][b]=A[a+3][b+1]+0.775;
	    
	     A[a][b]=A[a+3][b+4]/0.57;
	    
	     A[a][b]=A[a+5][b]/0.371;
	    
	     A[a][b]=A[a+5][b+2]-0.612;
	    
	     B[a][b]=0.851;
	     B[a-3][b-1]=0.251;
	  }

    return 0;
}