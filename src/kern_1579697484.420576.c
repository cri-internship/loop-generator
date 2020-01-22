#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(280, 770, 230, "random");
	int **B = create_two_dim_int(410, 240, "random");
	int ***A = create_three_dim_int(970, 550, 880, "random");
	int ***D = create_three_dim_int(230, 970, 630, "random");
	int **E = create_two_dim_int(550, 310, "random");

	for (int d = 1; d < 230; d++)
	  for (int c = 5; c < 546; c++)
	    for (int b = 5; b < 225; b++)
	      for (int a = 5; a < 225; a++)
	      {
	        
	       D[a][b][c]=D[a][b-1][c]*E[a][b]-A[a][b][c]/C[a][b][c];
	        
	       A[a][b][c]=A[a+3][b+4][c+2]*B[a][b]-D[a][b][c];
	        
	       C[a][b][c]=1;
	       C[a-5][b-5][c-1]=27;
	        
	       int var_a=D[a][b][c]*16;
	       int var_b=D[a+5][b][c+4]+46;
	      }

    return 0;
}