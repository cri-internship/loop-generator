#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(260, 1000, 690, "random");
	int **B = create_two_dim_int(810, 270, "random");

	for (int d = 3; d < 690; d++)
	  for (int c = 4; c < 269; c++)
	    for (int b = 1; b < 260; b++)
	      for (int a = 1; a < 260; a++)
	      {
	        
	       A[a][b][c]=A[a][b][c-3]/22;
	        
	       A[a][b][c]=A[a-1][b-4][c-1]/35;
	        
	       B[a][b]=B[a+1][b+1]*40;
	        
	       int var_a=B[a][b]*5;
	       int var_b=B[a][b-2]*37;
	      }

    return 0;
}