#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(430, 740, 920, "ones");
	float **B = create_two_dim_float(310, 640, "ones");

	for (int b = 5; b < 640; b++)
	  for (int a = 2; a < 310; a++)
	  {
	    
	     B[a][b]=0.196;
	     B[a-2][b-5]=0.285;
	    
	     float var_a=A[a][b][a]+0.654;
	     float var_b=A[a+5][b][a+2]-0.294;
	    
	     B[a][b]=A[a][b][a]*B[a][b];
	     A[a][b][a]=A[a+2][b+2][a+1]+B[a][b];
	  }

    return 0;
}