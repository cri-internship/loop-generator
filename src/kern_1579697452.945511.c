#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(960, 120, "random");
	float ***A = create_three_dim_float(290, 930, 530, "random");
	float ***B = create_three_dim_float(220, 920, 520, "random");

	for (int d = 1; d < 530; d++)
	  for (int c = 0; c < 930; c++)
	    for (int b = 0; b < 290; b++)
	      for (int a = 0; a < 290; a++)
	      {
	        
	       C[a][b]=A[a][b][c]*B[a][b][c]+C[a][b];
	       B[a][b][c]=A[a][b][c-1]/B[a][b][c]*C[a][b];
	      }

    return 0;
}