#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(680, 40, 120, "zeros");
	int *D = create_one_dim_int(550, "zeros");
	int ***C = create_three_dim_int(410, 600, 140, "zeros");
	int ***A = create_three_dim_int(970, 630, 390, "zeros");

	for (int d = 0; d < 116; d++)
	  for (int c = 0; c < 38; c++)
	    for (int b = 2; b < 550; b++)
	      for (int a = 2; a < 550; a++)
	      {
	        
	       D[a]=D[a-2]+A[a][b][c]/B[a][b][c]*4;
	        
	       A[a][b][c]=A[a+1][b+4][c+4]-D[a];
	        
	       B[a][b][c]=B[a+2][b+2][c+4]+A[a][b][c]/D[a]*C[a][b][c];
	        
	       C[a][b][c]=A[a][b][c]/D[a]-C[a][b][c]+B[a][b][c];
	       A[a][b][c]=A[a+1][b+3][c+4]*D[a];
	      }

    return 0;
}