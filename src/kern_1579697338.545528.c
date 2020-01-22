#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(460, 110, 470, "ones");
	double **A = create_two_dim_double(510, 20, "ones");

	for (int b = 3; b < 107; b++)
	  for (int a = 4; a < 455; a++)
	  {
	    
	     B[a][b][a]=A[a][b];
	     B[a+1][b][a+4]=0.952;
	    
	     B[a][b][a]=A[a][b];
	    
	     B[a][b][a]=B[a][b][a]/0.272;
	     A[a][b]=B[a-3][b-3][a-4]+A[a][b];
	  }

    return 0;
}