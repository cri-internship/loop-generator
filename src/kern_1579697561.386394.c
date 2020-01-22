#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(580, "random");
	int ***A = create_three_dim_int(340, 110, 480, "random");

	for (int d = 3; d < 477; d++)
	  for (int c = 5; c < 105; c++)
	    for (int b = 5; b < 335; b++)
	      for (int a = 5; a < 335; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-5][c-3]-B[a];
	        
	       A[a][b][c]=A[a-5][b-1][c-3]/48;
	        
	       B[a]=B[a+2]/A[a][b][c];
	        
	       A[a][b][c]=A[a+5][b+5][c+3]-5;
	        
	       B[a]=B[a]/A[a][b][c];
	       A[a][b][c]=B[a+4]/A[a][b][c];
	      }

    return 0;
}