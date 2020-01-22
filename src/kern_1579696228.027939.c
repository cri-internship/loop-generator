#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(500, 310, 200, "ones");
	int *A = create_one_dim_int(600, "ones");

	for (int d = 0; d < 197; d++)
	  for (int c = 0; c < 305; c++)
	    for (int b = 5; b < 498; b++)
	      for (int a = 5; a < 498; a++)
	      {
	        
	       A[a]=B[a][b][c];
	       A[a]=A[a]-28;
	        
	       A[a]=A[a-4]/B[a][b][c];
	        
	       A[a]=A[a-5]+35;
	        
	       B[a][b][c]=B[a+2][b+3][c]*27;
	        
	       B[a][b][c]=B[a+2][b+5][c+3]-2;
	        
	       B[a][b][c]=A[a]/B[a][b][c];
	      }

    return 0;
}