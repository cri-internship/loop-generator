#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(580, 680, "zeros");
	double ***A = create_three_dim_double(810, 430, 790, "zeros");

	for (int d = 4; d < 786; d++)
	  for (int c = 1; c < 427; c++)
	    for (int b = 5; b < 578; b++)
	      for (int a = 5; a < 578; a++)
	      {
	        
	       B[a][b]=B[a-2][b-1]+0.674;
	        
	       A[a][b][c]=A[a-5][b][c-4]-0.496;
	        
	       A[a][b][c]=A[a+3][b+2][c+4]/0.596;
	        
	       A[a][b][c]=B[a][b]/A[a][b][c];
	       B[a][b]=B[a+2][b]+A[a][b][c];
	      }

    return 0;
}