#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(180, 1000, "random");
	double **B = create_two_dim_double(430, 460, "random");

	for (int b = 0; b < 455; b++)
	  for (int a = 2; a < 180; a++)
	  {
	    
	     B[a][b]=B[a][b+5]+A[a][b];
	    
	     A[a][b]=0.728;
	     A[a-2][b]=0.85;
	  }

    return 0;
}