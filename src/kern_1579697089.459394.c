#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(700, 840, "random");
	float ***C = create_three_dim_float(450, 180, 850, "random");
	float **B = create_two_dim_float(390, 720, "random");
	float ***D = create_three_dim_float(230, 570, 640, "random");

	for (int d = 0; d < 835; d++)
	  for (int c = 0; c < 700; c++)
	    for (int b = 0; b < 700; b++)
	      for (int a = 0; a < 700; a++)
	      {
	        
	       A[a][b]=B[a][b]*C[a][b][c];
	       A[a][b+5]=D[a][b][c]-0.839+B[a][b];
	      }

    return 0;
}