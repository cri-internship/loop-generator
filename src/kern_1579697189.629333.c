#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(680, 810, "zeros");
	double ***B = create_three_dim_double(950, 680, 870, "zeros");

	for (int d = 1; d < 870; d++)
	  for (int c = 5; c < 680; c++)
	    for (int b = 2; b < 680; b++)
	      for (int a = 2; a < 680; a++)
	      {
	        
	       A[a][b]=A[a-1][b-5]*B[a][b][c];
	        
	       B[a][b][c]=0.879;
	       B[a-2][b-4][c-1]=0.833;
	      }

    return 0;
}