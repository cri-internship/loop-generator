#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(770, 870, 450, "random");
	float ***A = create_three_dim_float(630, 920, 650, "random");

	for (int d = 4; d < 450; d++)
	  for (int c = 5; c < 870; c++)
	    for (int b = 5; b < 630; b++)
	      for (int a = 5; a < 630; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-5][c-4]-0.727;
	        
	       B[a][b][c]=A[a][b][c];
	       B[a-1][b-4][c-2]=A[a][b][c];
	        
	       A[a][b][c]=0.961;
	      }

    return 0;
}