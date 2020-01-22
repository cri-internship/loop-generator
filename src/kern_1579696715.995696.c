#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(150, 660, 300, "zeros");
	float ***E = create_three_dim_float(770, 340, 470, "zeros");
	float ***B = create_three_dim_float(880, 40, 260, "zeros");
	float **D = create_two_dim_float(700, 180, "zeros");
	float **C = create_two_dim_float(650, 210, "zeros");

	for (int d = 0; d < 256; d++)
	  for (int c = 0; c < 40; c++)
	    for (int b = 0; b < 700; b++)
	      for (int a = 0; a < 700; a++)
	      {
	        
	       B[a][b][c]=D[a][b]+A[a][b][c]/C[a][b];
	       B[a+4][b][c+4]=E[a][b][c]/0.006*A[a][b][c]-D[a][b];
	      }

    return 0;
}