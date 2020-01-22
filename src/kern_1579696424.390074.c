#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(700, 1000, 680, "zeros");
	double *A = create_one_dim_double(250, "zeros");
	double **C = create_two_dim_double(280, 90, "zeros");
	double *B = create_one_dim_double(810, "zeros");

	for (int d = 3; d < 680; d++)
	  for (int c = 5; c < 85; c++)
	    for (int b = 5; b < 278; b++)
	      for (int a = 5; a < 278; a++)
	      {
	        
	       D[a][b][c]=D[a-5][b-3][c-1]-B[a]*A[a]/C[a][b];
	        
	       D[a][b][c]=D[a-5][b-5][c-3]+0.722;
	        
	       C[a][b]=C[a+2][b+5]-0.397;
	        
	       D[a][b][c]=D[a][b+4][c]/B[a];
	        
	       C[a][b]=0.793;
	      }

    return 0;
}