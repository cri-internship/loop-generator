#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(130, 650, "ones");
	double **A = create_two_dim_double(630, 760, "ones");
	double ***C = create_three_dim_double(540, 650, 110, "ones");

	for (int b = 3; b < 645; b++)
	  for (int a = 4; a < 535; a++)
	  {
	    
	     A[a][b]=A[a][b-3]+0.986;
	    
	     A[a][b]=A[a-4][b-3]+0.878;
	    
	     C[a][b][a]=C[a+3][b+5][a+5]/0.956;
	    
	     C[a][b][a]=0.484;
	  }

    return 0;
}