#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(820, 670, "zeros");
	float *B = create_one_dim_float(450, "zeros");

	for (int b = 5; b < 666; b++)
	  for (int a = 3; a < 449; a++)
	  {
	    
	     A[a][b]=A[a-2][b-5]+0.619;
	    
	     A[a][b]=A[a+2][b+3]-B[a];
	    
	     B[a]=0.358;
	     B[a+1]=0.589;
	    
	     B[a]=A[a][b]+B[a];
	     A[a][b]=A[a+5][b+4]*B[a];
	  }

    return 0;
}