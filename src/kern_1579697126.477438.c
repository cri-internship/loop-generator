#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(160, 440, 790, "random");
	int **A = create_two_dim_int(670, 150, "random");
	int ***C = create_three_dim_int(880, 650, 410, "random");

	for (int d = 0; d < 410; d++)
	  for (int c = 5; c < 150; c++)
	    for (int b = 3; b < 155; b++)
	      for (int a = 3; a < 155; a++)
	      {
	        
	       A[a][b]=A[a-3][b-1]-34;
	        
	       B[a][b][c]=B[a+5][b+1][c+1]-25;
	        
	       B[a][b][c]=B[a+3][b][c+3]+16;
	        
	       A[a][b]=47;
	        
	       A[a][b]=C[a][b][c]/27;
	       B[a][b][c]=C[a][b-4][c]-18;
	      }

    return 0;
}