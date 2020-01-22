#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(350, 890, "ones");
	double ***B = create_three_dim_double(1000, 340, 480, "ones");
	double **C = create_two_dim_double(310, 870, "ones");
	double **A = create_two_dim_double(520, 780, "ones");

	for (int d = 0; d < 476; d++)
	  for (int c = 4; c < 336; c++)
	    for (int b = 5; b < 350; b++)
	      for (int a = 5; a < 350; a++)
	      {
	        
	       A[a][b]=A[a-3][b-4]/B[a][b][c];
	        
	       A[a][b]=A[a-5][b]-0.436;
	        
	       B[a][b][c]=B[a][b+4][c+3]+C[a][b]*D[a][b]/A[a][b];
	        
	       double var_a=A[a][b]-0.378;
	       double var_b=A[a-3][b-1]*0.193;
	        
	       B[a][b][c]=D[a][b]*A[a][b];
	       A[a][b]=D[a-3][b-1]+0.829;
	        
	       double var_c=B[a][b][c]-0.703;
	       double var_d=B[a+5][b+4][c+4]/0.847;
	      }

    return 0;
}