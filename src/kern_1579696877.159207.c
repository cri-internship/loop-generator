#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(560, 920, "ones");
	double **B = create_two_dim_double(900, 630, "ones");
	double ***C = create_three_dim_double(490, 870, 90, "ones");
	double **D = create_two_dim_double(690, 440, "ones");

	for (int d = 0; d < 89; d++)
	  for (int c = 0; c < 630; c++)
	    for (int b = 5; b < 490; b++)
	      for (int a = 5; a < 490; a++)
	      {
	        
	       C[a][b][c]=C[a][b+5][c+1]+B[a][b]/A[a][b];
	        
	       B[a][b]=0.934;
	       B[a-5][b]=0.679;
	      }

    return 0;
}