#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(740, 380, "random");
	float ***A = create_three_dim_float(160, 160, 290, "random");

	for (int d = 3; d < 289; d++)
	  for (int c = 4; c < 155; c++)
	    for (int b = 5; b < 157; b++)
	      for (int a = 5; a < 157; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-4][c-3]+0.546;
	        
	       A[a][b][c]=A[a-1][b-3][c-1]*0.39;
	        
	       A[a][b][c]=A[a+3][b+5][c+1]*B[a][b];
	        
	       B[a][b]=B[a+3][b+5]*0.304;
	        
	       B[a][b]=B[a+1][b+1]/0.968;
	        
	       A[a][b][c]=B[a][b]+0.61;
	        
	       float var_a=B[a][b]/0.399;
	       float var_b=B[a-5][b-2]-0.761;
	      }

    return 0;
}