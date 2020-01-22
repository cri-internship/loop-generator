#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(740, "ones");
	float ***A = create_three_dim_float(720, 300, 810, "ones");

	for (int d = 3; d < 806; d++)
	  for (int c = 4; c < 299; c++)
	    for (int b = 5; b < 715; b++)
	      for (int a = 5; a < 715; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-4][c-3]-0.032;
	        
	       A[a][b][c]=A[a-5][b][c-2]-0.552;
	        
	       B[a]=B[a+1]*A[a][b][c];
	        
	       A[a][b][c]=A[a+5][b+1][c]*B[a];
	        
	       B[a]=A[a][b][c];
	        
	       float var_a=B[a]-0.908;
	       float var_b=B[a+3]/0.949;
	      }

    return 0;
}