#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(50, "ones");
	float ***A = create_three_dim_float(300, 830, 490, "ones");

	for (int b = 0; b < 828; b++)
	  for (int a = 0; a < 297; a++)
	  {
	    
	     A[a][b][a]=0.967;
	     A[a+3][b+2][a+3]=0.306;
	  }

    return 0;
}