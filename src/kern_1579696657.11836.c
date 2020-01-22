#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(510, 230, 880, "ones");
	int **B = create_two_dim_int(800, 290, "ones");

	for (int d = 5; d < 880; d++)
	  for (int c = 4; c < 230; c++)
	    for (int b = 3; b < 510; b++)
	      for (int a = 3; a < 510; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-1][c-2]/49;
	        
	       A[a][b][c]=A[a-2][b-2][c-4]*20;
	        
	       B[a][b]=A[a][b][c];
	       B[a][b-4]=A[a][b][c];
	        
	       B[a][b]=B[a][b]-A[a][b][c];
	       A[a][b][c]=B[a+1][b+1]+A[a][b][c];
	        
	       B[a][b]=A[a][b][c]-B[a][b];
	       B[a][b]=A[a][b-2][c-5]/B[a][b];
	      }

    return 0;
}