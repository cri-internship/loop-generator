#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(180, 70, 170, "random");
	float ***B = create_three_dim_float(330, 580, 260, "random");
	float **A = create_two_dim_float(580, 360, "random");

	for (int d = 4; d < 260; d++)
	  for (int c = 2; c < 580; c++)
	    for (int b = 4; b < 330; b++)
	      for (int a = 4; a < 330; a++)
	      {
	        
	       B[a][b][c]=B[a][b][c]-A[a][b]+0.283;
	       A[a][b]=B[a-4][b-2][c-4]-C[a][b][c]+A[a][b];
	      }

    return 0;
}