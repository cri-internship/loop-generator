#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(10, 630, 710, "ones");
	double ***A = create_three_dim_double(530, 50, 450, "ones");
	double **C = create_two_dim_double(140, 540, "ones");

	for (int d = 5; d < 450; d++)
	  for (int c = 4; c < 50; c++)
	    for (int b = 3; b < 530; b++)
	      for (int a = 3; a < 530; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-4][c-5]-C[a][b];
	      }

    return 0;
}