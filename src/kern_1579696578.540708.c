#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(170, 870, 710, "ones");
	double ***C = create_three_dim_double(210, 30, 520, "ones");
	double ***A = create_three_dim_double(140, 80, 230, "ones");
	double *D = create_one_dim_double(450, "ones");

	for (int b = 4; b < 80; b++)
	  for (int a = 5; a < 140; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-4][a-1]+0.37;
	    
	     A[a][b][a]=0.011;
	     A[a-4][b-4][a-3]=0.351;
	  }

    return 0;
}