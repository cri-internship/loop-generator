#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(340, 510, 200, "zeros");
	int **B = create_two_dim_int(190, 570, "zeros");
	int **C = create_two_dim_int(920, 160, "zeros");

	for (int d = 5; d < 199; d++)
	  for (int c = 5; c < 160; c++)
	    for (int b = 5; b < 186; b++)
	      for (int a = 5; a < 186; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b][c-5]/C[a][b]-B[a][b];
	        
	       B[a][b]=B[a+4][b+1]-17;
	        
	       A[a][b][c]=A[a+5][b+3][c+1]-23;
	        
	       C[a][b]=33;
	       C[a][b-2]=0;
	        
	       B[a][b]=49;
	        
	       B[a][b]=A[a][b][c]/B[a][b];
	       C[a][b]=A[a-2][b][c-5]-10;
	        
	       A[a][b][c]=A[a][b][c]-23+C[a][b];
	       C[a][b]=A[a-5][b-5][c-3]/B[a][b];
	      }

    return 0;
}