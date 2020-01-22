#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(360, "random");
	int ***A = create_three_dim_int(470, 30, 430, "random");

	for (int d = 5; d < 425; d++)
	  for (int c = 1; c < 25; c++)
	    for (int b = 3; b < 356; b++)
	      for (int a = 3; a < 356; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-1][c-2]*B[a];
	        
	       B[a]=B[a-3]*2;
	        
	       B[a]=B[a+4]+45;
	        
	       A[a][b][c]=A[a][b+5][c+5]+41;
	        
	       A[a][b][c]=A[a+4][b+3][c]*16;
	        
	       int var_a=A[a][b][c]*50;
	       int var_b=A[a+1][b+2][c+2]+10;
	      }

    return 0;
}