#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(260, 580, "ones");
	float **B = create_two_dim_float(840, 920, "ones");

	for (int b = 5; b < 578; b++)
	  for (int a = 2; a < 258; a++)
	  {
	    
	     B[a][b]=B[a-2][b-5]*0.957;
	    
	     B[a][b]=B[a-1][b]*0.824;
	    
	     A[a][b]=0.984;
	     A[a+2][b+2]=B[a][b];
	  }

    return 0;
}