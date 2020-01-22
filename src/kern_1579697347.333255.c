#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(680, "random");
	int ***B = create_three_dim_int(130, 300, 580, "random");

	for (int d = 1; d < 578; d++)
	  for (int c = 0; c < 295; c++)
	    for (int b = 4; b < 127; b++)
	      for (int a = 4; a < 127; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b][c-1]+25;
	        
	       A[a]=A[a+1]-15;
	        
	       B[a][b][c]=B[a+2][b+5][c+2]+21;
	        
	       B[a][b][c]=B[a+3][b+1][c+2]/39;
	        
	       int var_a=A[a]+49;
	       int var_b=A[a+5]+25;
	      }

    return 0;
}