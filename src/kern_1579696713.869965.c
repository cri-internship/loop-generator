#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(410, "random");
	float **C = create_two_dim_float(930, 970, "random");
	float **B = create_two_dim_float(340, 80, "random");
	float ***A = create_three_dim_float(950, 230, 260, "random");
	float ***E = create_three_dim_float(190, 730, 720, "random");

	for (int d = 5; d < 80; d++)
	  for (int c = 2; c < 340; c++)
	    for (int b = 2; b < 340; b++)
	      for (int a = 2; a < 340; a++)
	      {
	        
	       E[a][b][c]=B[a][b]-E[a][b][c];
	       D[a]=B[a-2][b-5]/0.015;
	      }

    return 0;
}