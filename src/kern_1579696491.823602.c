#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(240, 70, 130, "ones");
	double *B = create_one_dim_double(90, "ones");
	double **C = create_two_dim_double(250, 470, "ones");

	for (int d = 2; d < 125; d++)
	  for (int c = 5; c < 69; c++)
	    for (int b = 5; b < 88; b++)
	      for (int a = 5; a < 88; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-4][c-2]*0.578;
	        
	       A[a][b][c]=A[a+3][b+1][c]*C[a][b];
	        
	       B[a]=0.896;
	       B[a+2]=0.941;
	        
	       B[a]=A[a][b][c];
	        
	       C[a][b]=B[a];
	       C[a-2][b-5]=B[a];
	      }

    return 0;
}