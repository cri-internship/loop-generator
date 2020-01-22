#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(700, 740, 920, "zeros");
	float ***B = create_three_dim_float(790, 950, 410, "zeros");
	float ***A = create_three_dim_float(550, 890, 410, "zeros");

	for (int d = 0; d < 405; d++)
	  for (int c = 0; c < 887; c++)
	    for (int b = 0; b < 545; b++)
	      for (int a = 0; a < 545; a++)
	      {
	        
	       C[a][b][c]=A[a][b][c]*B[a][b][c]/C[a][b][c];
	       B[a][b][c]=A[a+5][b+3][c+5]+0.859;
	      }

    return 0;
}