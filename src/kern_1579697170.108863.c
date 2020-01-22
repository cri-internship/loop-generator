#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(540, 870, "zeros");
	float ***D = create_three_dim_float(250, 940, 870, "zeros");
	float ***C = create_three_dim_float(280, 570, 510, "zeros");
	float ***B = create_three_dim_float(810, 670, 480, "zeros");

	for (int d = 0; d < 509; d++)
	  for (int c = 0; c < 570; c++)
	    for (int b = 0; b < 279; b++)
	      for (int a = 0; a < 279; a++)
	      {
	        
	       C[a][b][c]=C[a+1][b][c+1]*0.578;
	      }

    return 0;
}