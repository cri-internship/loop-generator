#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(530, 730, 700, "ones");
	double **C = create_two_dim_double(130, 20, "ones");
	double **A = create_two_dim_double(220, 280, "ones");

	for (int d = 0; d < 700; d++)
	  for (int c = 4; c < 730; c++)
	    for (int b = 2; b < 530; b++)
	      for (int a = 2; a < 530; a++)
	      {
	        
	       A[a][b]=B[a][b][c]-0.517;
	       B[a][b][c]=B[a-2][b-4][c]*C[a][b];
	      }

    return 0;
}