#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(590, "ones");
	double ***D = create_three_dim_double(500, 650, 220, "ones");
	double ***E = create_three_dim_double(1000, 150, 330, "ones");
	double ***C = create_three_dim_double(160, 270, 510, "ones");
	double *B = create_one_dim_double(330, "ones");

	for (int b = 2; b < 330; b++)
	  for (int a = 2; a < 330; a++)
	  {
	    
	     B[a]=0.492;
	     B[a]=B[a]-C[a][b][a]/D[a][b][a];
	    
	     B[a]=B[a-2]/E[a][b][a];
	  }

    return 0;
}