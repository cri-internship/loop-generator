#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(990, 670, 70, "ones");
	int ***C = create_three_dim_int(70, 790, 790, "ones");
	int **A = create_two_dim_int(780, 310, "ones");
	int ***B = create_three_dim_int(900, 310, 710, "ones");

	for (int d = 2; d < 706; d++)
	  for (int c = 5; c < 305; c++)
	    for (int b = 3; b < 70; b++)
	      for (int a = 3; a < 70; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-5][c-1]-49;
	        
	       C[a][b][c]=C[a-3][b][c-2]/10;
	        
	       B[a][b][c]=B[a+4][b+5][c+4]-C[a][b][c];
	        
	       B[a][b][c]=B[a+2][b+5][c+2]/A[a][b]+D[a][b][c]*C[a][b][c];
	        
	       B[a][b][c]=B[a+4][b][c+1]/33;
	        
	       C[a][b][c]=A[a][b]+B[a][b][c]/C[a][b][c]-48;
	       B[a][b][c]=A[a-1][b-2]+B[a][b][c];
	      }

    return 0;
}