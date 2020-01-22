#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(150, 740, "random");
	int **A = create_two_dim_int(220, 440, "random");
	int ***C = create_three_dim_int(630, 20, 410, "random");
	int ***D = create_three_dim_int(660, 600, 510, "random");

	for (int d = 4; d < 410; d++)
	  for (int c = 5; c < 20; c++)
	    for (int b = 2; b < 147; b++)
	      for (int a = 2; a < 147; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-5][c-4]-B[a][b]/C[a][b][c]+A[a][b];
	        
	       D[a][b][c]=D[a+3][b+4][c+5]*30-C[a][b][c];
	        
	       B[a][b]=B[a+3][b+5]-40;
	        
	       A[a][b]=A[a+2][b+5]/39;
	        
	       D[a][b][c]=D[a+1][b][c+1]*A[a][b]/B[a][b];
	        
	       C[a][b][c]=1;
	       C[a+3][b][c]=20;
	      }

    return 0;
}