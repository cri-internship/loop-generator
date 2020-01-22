#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(290, 810, 550, "zeros");
	double **A = create_two_dim_double(700, 810, "zeros");

	for (int d = 3; d < 550; d++)
	  for (int c = 3; c < 805; c++)
	    for (int b = 5; b < 290; b++)
	      for (int a = 5; a < 290; a++)
	      {
	        
	       B[a][b][c]=A[a][b];
	       B[a-5][b-3][c-3]=A[a][b];
	        
	       B[a][b][c]=A[a][b]*B[a][b][c];
	       A[a][b]=A[a+1][b+5]/B[a][b][c];
	      }

    return 0;
}