#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(710, 70, 570, "zeros");
	double **B = create_two_dim_double(610, 490, "zeros");

	for (int d = 0; d < 566; d++)
	  for (int c = 2; c < 65; c++)
	    for (int b = 5; b < 610; b++)
	      for (int a = 5; a < 610; a++)
	      {
	        
	       A[a][b][c]=A[a+2][b+5][c+4]*0.216;
	        
	       B[a][b]=0.03;
	       B[a-5][b-2]=0.217;
	      }

    return 0;
}