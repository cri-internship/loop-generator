#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(730, 890, 150, "ones");
	int **C = create_two_dim_int(790, 770, "ones");
	int **B = create_two_dim_int(230, 120, "ones");
	int ***A = create_three_dim_int(340, 260, 750, "ones");

	for (int d = 0; d < 147; d++)
	  for (int c = 3; c < 120; c++)
	    for (int b = 5; b < 230; b++)
	      for (int a = 5; a < 230; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-3][c]*C[a][b];
	        
	       B[a][b]=B[a-4][b]+D[a][b][c]/A[a][b][c];
	        
	       C[a][b]=C[a+2][b+3]*B[a][b]+D[a][b][c];
	        
	       A[a][b][c]=A[a+2][b+3][c+3]*5;
	        
	       B[a][b]=0;
	        
	       D[a][b][c]=23;
	       D[a+2][b+5][c+3]=A[a][b][c]/C[a][b]+B[a][b];
	        
	       int var_a=C[a][b]+1;
	       int var_b=C[a-4][b-2]-48;
	      }

    return 0;
}