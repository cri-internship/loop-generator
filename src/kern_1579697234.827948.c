#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(110, 880, 460, "random");
	double **B = create_two_dim_double(260, 20, "random");

	for (int b = 0; b < 877; b++)
	  for (int a = 0; a < 106; a++)
	  {
	    
	     B[a][b]=A[a][b][a]+0.814;
	     A[a][b][a]=A[a][b+3][a+4]/B[a][b];
	  }

    return 0;
}