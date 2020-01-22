#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(590, 710, 1000, "zeros");
	double **B = create_two_dim_double(510, 100, "zeros");

	for (int d = 0; d < 997; d++)
	  for (int c = 1; c < 99; c++)
	    for (int b = 3; b < 510; b++)
	      for (int a = 3; a < 510; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b+1][c+3]/B[a][b];
	        
	       B[a][b]=0.787;
	       B[a-3][b-1]=0.548;
	        
	       A[a][b][c]=B[a][b]*A[a][b][c];
	       B[a][b]=B[a][b+1]+A[a][b][c];
	      }

    return 0;
}