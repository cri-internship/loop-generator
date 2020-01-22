#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(420, 960, 930, "ones");
	float **B = create_two_dim_float(280, 250, "ones");
	float ***D = create_three_dim_float(450, 130, 560, "ones");
	float **C = create_two_dim_float(700, 510, "ones");

	for (int b = 1; b < 250; b++)
	  for (int a = 0; a < 280; a++)
	  {
	    
	     B[a][b]=B[a][b-1]*0.407;
	    
	     A[a][b][a]=A[a][b+4][a]-D[a][b][a]+C[a][b]*B[a][b];
	  }

    return 0;
}