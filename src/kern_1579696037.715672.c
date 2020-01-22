#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(330, 230, 720, "ones");
	double *A = create_one_dim_double(970, "ones");

	for (int d = 5; d < 715; d++)
	  for (int c = 1; c < 226; c++)
	    for (int b = 3; b < 328; b++)
	      for (int a = 3; a < 328; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-1][c-5]+A[a];
	        
	       B[a][b][c]=B[a-3][b-1][c]*0.727;
	        
	       B[a][b][c]=B[a+2][b][c+2]-0.731;
	        
	       B[a][b][c]=B[a][b+4][c+5]+0.078;
	        
	       B[a][b][c]=B[a+2][b][c+3]+A[a];
	        
	       A[a]=0.216;
	       A[a-1]=0.987;
	      }

    return 0;
}