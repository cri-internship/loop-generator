#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(440, "zeros");
	double *B = create_one_dim_double(780, "zeros");
	double ***C = create_three_dim_double(670, 770, 780, "zeros");
	double **A = create_two_dim_double(880, 20, "zeros");

	for (int d = 0; d < 775; d++)
	  for (int c = 0; c < 766; c++)
	    for (int b = 0; b < 669; b++)
	      for (int a = 0; a < 669; a++)
	      {
	        
	       C[a][b][c]=C[a+1][b+4][c+5]*0.591;
	      }

    return 0;
}