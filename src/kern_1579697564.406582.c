#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(820, 670, "ones");
	double ***B = create_three_dim_double(890, 10, 730, "ones");

	for (int b = 3; b < 10; b++)
	  for (int a = 4; a < 890; a++)
	  {
	    
	     B[a][b][a]=B[a][b-3][a-4]*A[a][b];
	  }

    return 0;
}