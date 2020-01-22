#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(70, 880, 160, "zeros");
	double **A = create_two_dim_double(940, 990, "zeros");

	for (int d = 4; d < 160; d++)
	  for (int c = 4; c < 880; c++)
	    for (int b = 5; b < 70; b++)
	      for (int a = 5; a < 70; a++)
	      {
	        
	       B[a][b][c]=B[a][b-4][c-1]*A[a][b];
	        
	       B[a][b][c]=B[a-5][b-2][c-4]+A[a][b];
	        
	       A[a][b]=A[a-4][b-2]/0.689;
	        
	       A[a][b]=A[a+4][b+1]+0.613;
	        
	       double var_a=A[a][b]*0.045;
	       double var_b=A[a+3][b+3]*0.216;
	      }

    return 0;
}