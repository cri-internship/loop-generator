#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(1000, 270, 700, "ones");
	float **A = create_two_dim_float(420, 890, "ones");
	float **E = create_two_dim_float(720, 850, "ones");
	float **C = create_two_dim_float(40, 170, "ones");
	float ***B = create_three_dim_float(970, 430, 330, "ones");

	for (int d = 1; d < 700; d++)
	  for (int c = 0; c < 270; c++)
	    for (int b = 5; b < 1000; b++)
	      for (int a = 5; a < 1000; a++)
	      {
	        
	       D[a][b][c]=D[a-5][b][c-1]/A[a][b]+E[a][b];
	      }

    return 0;
}