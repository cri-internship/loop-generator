#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(950, 630, 680, "ones");
	int ***A = create_three_dim_int(840, 400, 360, "ones");
	int **C = create_two_dim_int(230, 670, "ones");
	int ***B = create_three_dim_int(960, 170, 950, "ones");

	for (int d = 3; d < 680; d++)
	  for (int c = 4; c < 165; c++)
	    for (int b = 4; b < 230; b++)
	      for (int a = 4; a < 230; a++)
	      {
	        
	       D[a][b][c]=D[a-1][b][c-3]/C[a][b]*B[a][b][c];
	        
	       C[a][b]=C[a][b+3]/D[a][b][c]+42;
	        
	       B[a][b][c]=B[a+5][b+1][c+5]/33;
	        
	       B[a][b][c]=B[a+3][b+5][c+2]+C[a][b]*A[a][b][c]-D[a][b][c];
	        
	       D[a][b][c]=A[a][b][c];
	        
	       C[a][b]=D[a][b][c];
	      }

    return 0;
}