#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(270, 280, 470, "ones");

	for (int b = 0; b < 277; b++)
	  for (int a = 0; a < 265; a++)
	  {
	    
	     A[a][b][a]=0.671;
	     A[a+5][b+3][a+1]=0.357;
	  }

    return 0;
}