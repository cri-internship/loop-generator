#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(1000, "zeros");
	double **A = create_two_dim_double(390, 910, "zeros");
	double ***D = create_three_dim_double(280, 500, 130, "zeros");
	double ***C = create_three_dim_double(440, 540, 230, "zeros");

	for (int d = 3; d < 129; d++)
	  for (int c = 2; c < 496; c++)
	    for (int b = 5; b < 279; b++)
	      for (int a = 5; a < 279; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-1][c-3]*0.22;
	        
	       C[a][b][c]=C[a-5][b-2][c-3]/A[a][b];
	        
	       C[a][b][c]=C[a+2][b+3][c+5]-0.59;
	        
	       A[a][b]=0.495;
	       A[a-3][b-1]=0.497;
	        
	       D[a][b][c]=0.467;
	      }

    return 0;
}