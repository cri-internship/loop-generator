#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(620, 620, "ones");
	float **B = create_two_dim_float(250, 80, "ones");

	for (int b = 5; b < 80; b++)
	  for (int a = 5; a < 248; a++)
	  {
	    
	     float var_a=B[a][b]*0.299;
	     B[a][b]=0.762;
	    
	     B[a][b]=0.233;
	    
	     A[a][b]=0.338;
	     A[a-4][b-1]=0.56;
	    
	     B[a][b]=B[a][b]*0.697;
	     A[a][b]=B[a+2][b]*A[a][b];
	    
	     float var_b=A[a][b]/0.837;
	     float var_c=A[a-5][b-5]+0.152;
	  }

    return 0;
}