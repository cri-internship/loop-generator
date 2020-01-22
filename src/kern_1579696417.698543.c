#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(650, 880, 350, "zeros");
	float **C = create_two_dim_float(270, 810, "zeros");
	float **B = create_two_dim_float(200, 330, "zeros");

	for (int d = 0; d < 349; d++)
	  for (int c = 5; c < 330; c++)
	    for (int b = 5; b < 200; b++)
	      for (int a = 5; a < 200; a++)
	      {
	        
	       A[a][b][c]=0.301;
	       A[a-5][b-5][c]=0.302;
	        
	       B[a][b]=0.047;
	       B[a-5][b-1]=0.324;
	        
	       A[a][b][c]=C[a][b]*B[a][b];
	        
	       B[a][b]=A[a][b][c]*B[a][b]/C[a][b];
	       C[a][b]=A[a][b-1][c]*B[a][b];
	      }

    return 0;
}