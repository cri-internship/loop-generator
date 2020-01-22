#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(690, 210, "zeros");

	for (int b = 2; b < 210; b++)
	  for (int a = 0; a < 690; a++)
	  {
	    
	     A[a][b]=0.721;
	     A[a][b-2]=0.114;
	  }

    return 0;
}