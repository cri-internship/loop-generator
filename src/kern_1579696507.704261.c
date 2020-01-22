#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(800, 900, "ones");
	double **B = create_two_dim_double(680, 890, "ones");
	double **E = create_two_dim_double(330, 590, "ones");
	double ***C = create_three_dim_double(250, 970, 800, "ones");
	double *A = create_one_dim_double(590, "ones");

	for (int b = 0; b < 897; b++)
	  for (int a = 0; a < 800; a++)
	  {
	    
	     D[a][b]=D[a][b+3]*0.555;
	  }

    return 0;
}