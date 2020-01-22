#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(20, 380, 350, "zeros");
	double *B = create_one_dim_double(960, "zeros");

	for (int b = 0; b < 959; b++)
	  for (int a = 0; a < 959; a++)
	  {
	    
	     B[a]=B[a+1]*A[a][b][a];
	  }

    return 0;
}