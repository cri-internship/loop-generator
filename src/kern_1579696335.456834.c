#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(890, 640, 510, "zeros");
	double **A = create_two_dim_double(580, 330, "zeros");

	for (int d = 0; d < 505; d++)
	  for (int c = 1; c < 330; c++)
	    for (int b = 5; b < 580; b++)
	      for (int a = 5; a < 580; a++)
	      {
	        
	       A[a][b]=A[a-5][b-1]*B[a][b][c];
	        
	       B[a][b][c]=A[a][b];
	       B[a+3][b+1][c+5]=A[a][b];
	      }

    return 0;
}