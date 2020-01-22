#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(440, 10, "zeros");
	float ***D = create_three_dim_float(520, 80, 940, "zeros");
	float **C = create_two_dim_float(140, 70, "zeros");
	float **B = create_two_dim_float(960, 900, "zeros");

	for (int d = 2; d < 940; d++)
	  for (int c = 4; c < 80; c++)
	    for (int b = 2; b < 520; b++)
	      for (int a = 2; a < 520; a++)
	      {
	        
	       B[a][b]=D[a][b][c]+0.644;
	       A[a][b]=D[a-2][b-4][c-2]/C[a][b]*A[a][b]-A[a][b];
	      }

    return 0;
}