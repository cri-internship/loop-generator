#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(550, 730, "zeros");
	double ***B = create_three_dim_double(810, 900, 880, "zeros");

	for (int d = 5; d < 878; d++)
	  for (int c = 5; c < 727; c++)
	    for (int b = 4; b < 545; b++)
	      for (int a = 4; a < 545; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-5][c-5]+0.904;
	        
	       A[a][b]=A[a-2][b-2]/0.16;
	        
	       A[a][b]=A[a+5][b+2]-0.87;
	        
	       B[a][b][c]=B[a+5][b+5][c+2]-0.623;
	        
	       A[a][b]=A[a][b]*B[a][b][c];
	       B[a][b][c]=A[a+3][b+3]+0.964;
	        
	       double var_a=B[a][b][c]+0.622;
	       double var_b=B[a-4][b-4][c-4]/0.779;
	        
	       A[a][b]=B[a][b][c]*0.997;
	       B[a][b][c]=B[a-2][b-2][c-3]+A[a][b];
	      }

    return 0;
}