#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(890, 680, 420, "zeros");
	int ***A = create_three_dim_int(70, 720, 580, "zeros");
	int *D = create_one_dim_int(230, "zeros");
	int ***B = create_three_dim_int(490, 720, 250, "zeros");

	for (int d = 0; d < 245; d++)
	  for (int c = 2; c < 680; c++)
	    for (int b = 4; b < 66; b++)
	      for (int a = 4; a < 66; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b-2][c]*16;
	        
	       B[a][b][c]=B[a][b+5][c+3]-21;
	        
	       B[a][b][c]=B[a+1][b+3][c+3]-7;
	        
	       A[a][b][c]=4-D[a];
	       A[a+2][b+3][c+3]=31/D[a]*C[a][b][c];
	        
	       C[a][b][c]=A[a][b][c]-B[a][b][c]/46;
	       B[a][b][c]=A[a+4][b+2][c+5]+14;
	      }

    return 0;
}