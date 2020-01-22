#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(170, "ones");
	double ***A = create_three_dim_double(180, 570, 750, "ones");

	for (int d = 0; d < 745; d++)
	  for (int c = 0; c < 567; c++)
	    for (int b = 2; b < 170; b++)
	      for (int a = 2; a < 170; a++)
	      {
	        
	       A[a][b][c]=A[a+4][b+3][c+5]+0.801;
	        
	       B[a]=0.124;
	       B[a-2]=0.493;
	      }

    return 0;
}