#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(880, 350, 880, "random");
	int ***B = create_three_dim_int(170, 180, 590, "random");

	for (int d = 0; d < 586; d++)
	  for (int c = 2; c < 180; c++)
	    for (int b = 3; b < 170; b++)
	      for (int a = 3; a < 170; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-2][c]*16;
	        
	       A[a][b][c]=A[a][b+4][c+3]-10;
	        
	       B[a][b][c]=38;
	        
	       A[a][b][c]=39;
	        
	       B[a][b][c]=A[a][b][c]*B[a][b][c];
	       A[a][b][c]=A[a+4][b+3][c+3]+B[a][b][c];
	      }

    return 0;
}