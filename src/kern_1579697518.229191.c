#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(750, 910, 750, "ones");
	double ***A = create_three_dim_double(190, 370, 250, "ones");
	double *B = create_one_dim_double(670, "ones");
	double ***C = create_three_dim_double(380, 340, 270, "ones");
	double **E = create_two_dim_double(230, 40, "ones");

	for (int c = 1; c < 40; c++)
	  for (int b = 0; b < 230; b++)
	    for (int a = 0; a < 230; a++)
	    {
	      
	      E[a][b]=0.231;
	      E[a][b-1]=0.504;
	    }

    return 0;
}