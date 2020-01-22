#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(170, 930, 200, "ones");
	int **C = create_two_dim_int(360, 560, "ones");
	int **D = create_two_dim_int(980, 440, "ones");
	int **A = create_two_dim_int(970, 100, "ones");

	for (int d = 2; d < 199; d++)
	  for (int c = 5; c < 100; c++)
	    for (int b = 4; b < 167; b++)
	      for (int a = 4; a < 167; a++)
	      {
	        
	       A[a][b]=A[a-2][b]*2;
	        
	       B[a][b][c]=B[a][b+4][c+1]*A[a][b]/D[a][b];
	        
	       C[a][b]=C[a+3][b+4]*B[a][b][c]/18-B[a][b][c];
	        
	       B[a][b][c]=C[a][b]-D[a][b]/A[a][b];
	        
	       D[a][b]=39;
	       D[a][b-5]=33;
	      }

    return 0;
}