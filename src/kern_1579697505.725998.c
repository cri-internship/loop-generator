#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(80, 700, 620, "zeros");
	float ***A = create_three_dim_float(630, 570, 350, "zeros");

	for (int d = 0; d < 620; d++)
	  for (int c = 0; c < 700; c++)
	    for (int b = 0; b < 78; b++)
	      for (int a = 0; a < 78; a++)
	      {
	        
	       B[a][b][c]=A[a][b][c];
	       B[a+2][b][c]=0.476;
	      }

    return 0;
}