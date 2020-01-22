#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(340, 660, "ones");
	double ***A = create_three_dim_double(830, 420, 50, "ones");
	double ***D = create_three_dim_double(920, 960, 380, "ones");
	double ***C = create_three_dim_double(750, 480, 470, "ones");

	for (int b = 2; b < 417; b++)
	  for (int a = 3; a < 337; a++)
	  {
	    
	     D[a][b][a]=D[a-2][b-2][a-3]*0.195;
	    
	     B[a][b]=B[a+3][b+3]*0.673;
	    
	     B[a][b]=B[a+1][b+4]/0.934;
	    
	     D[a][b][a]=0.827;
	    
	     A[a][b][a]=0.438;
	     A[a+4][b+3][a]=0.542;
	  }

    return 0;
}