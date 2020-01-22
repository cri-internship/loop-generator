#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(680, "zeros");
	int ***B = create_three_dim_int(100, 800, 390, "zeros");

	for (int d = 0; d < 385; d++)
	  for (int c = 0; c < 798; c++)
	    for (int b = 4; b < 96; b++)
	      for (int a = 4; a < 96; a++)
	      {
	        
	       A[a]=33;
	       float  var_a=A[a]+44;
	        
	       A[a]=A[a-2]*1;
	        
	       A[a]=A[a-4]*B[a][b][c];
	        
	       B[a][b][c]=B[a+2][b+1][c+2]*10;
	        
	       B[a][b][c]=B[a+4][b+2][c+5]*15;
	        
	       B[a][b][c]=B[a+2][b+2][c+5]+A[a];
	        
	       A[a]=A[a]*B[a][b][c];
	       B[a][b][c]=A[a+3]-B[a][b][c];
	      }

    return 0;
}