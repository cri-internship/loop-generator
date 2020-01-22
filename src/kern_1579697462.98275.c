#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(200, 140, 260, "zeros");
	int ***C = create_three_dim_int(510, 620, 940, "zeros");
	int **E = create_two_dim_int(570, 610, "zeros");
	int **B = create_two_dim_int(540, 50, "zeros");
	int ***D = create_three_dim_int(490, 420, 550, "zeros");

	for (int d = 2; d < 260; d++)
	  for (int c = 1; c < 50; c++)
	    for (int b = 1; b < 200; b++)
	      for (int a = 1; a < 200; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-1][c-2]*D[a][b][c];
	        
	       E[a][b]=E[a][b+4]/B[a][b]*C[a][b][c];
	        
	       D[a][b][c]=D[a][b+3][c+5]+7;
	        
	       D[a][b][c]=20;
	        
	       D[a][b][c]=B[a][b]+E[a][b];
	       A[a][b][c]=B[a+2][b]-A[a][b][c];
	      }

    return 0;
}