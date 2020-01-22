#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(710, 220, 610, "random");
	float ***B = create_three_dim_float(930, 230, 510, "random");

	for (int d = 0; d < 508; d++)
	  for (int c = 0; c < 226; c++)
	    for (int b = 0; b < 926; b++)
	      for (int a = 0; a < 926; a++)
	      {
	        
	       B[a][b][c]=A[a][b][c];
	       B[a+4][b+4][c+2]=0.616;
	      }

    return 0;
}