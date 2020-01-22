#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(470, 880, "ones");
	float **B = create_two_dim_float(210, 40, "ones");

	for (int b = 2; b < 40; b++)
	  for (int a = 5; a < 210; a++)
	  {
	    
	     B[a][b]=B[a-5][b-2]*0.203;
	    
	     A[a][b]=A[a+4][b+4]*0.047;
	  }

    return 0;
}