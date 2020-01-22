#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(720, 310, "zeros");
	double ***A = create_three_dim_double(110, 870, 820, "zeros");

	for (int d = 0; d < 818; d++)
	  for (int c = 0; c < 309; c++)
	    for (int b = 0; b < 109; b++)
	      for (int a = 0; a < 109; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b+5][c+2]*B[a][b];
	        
	       B[a][b]=B[a][b]-A[a][b][c];
	       A[a][b][c]=B[a+4][b+1]-A[a][b][c];
	      }

    return 0;
}