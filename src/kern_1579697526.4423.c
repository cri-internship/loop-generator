#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(680, 370, "zeros");
	float **B = create_two_dim_float(190, 20, "zeros");

	for (int b = 0; b < 15; b++)
	  for (int a = 0; a < 190; a++)
	  {
	    
	     A[a][b]=A[a+4][b+5]-0.718;
	    
	     B[a][b]=B[a][b+5]+0.894;
	  }

    return 0;
}