#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(760, 470, 850, "ones");
	int **A = create_two_dim_int(730, 810, "ones");
	int ***D = create_three_dim_int(610, 500, 380, "ones");
	int **B = create_two_dim_int(130, 790, "ones");

	for (int d = 0; d < 845; d++)
	  for (int c = 4; c < 468; c++)
	    for (int b = 2; b < 126; b++)
	      for (int a = 2; a < 126; a++)
	      {
	        
	       B[a][b]=B[a-2][b-4]-C[a][b][c];
	        
	       B[a][b]=12;
	        
	       C[a][b][c]=A[a][b];
	       C[a][b+2][c+5]=B[a][b]/D[a][b][c]-D[a][b][c];
	        
	       C[a][b][c]=15;
	        
	       B[a][b]=B[a][b]/C[a][b][c];
	       D[a][b][c]=B[a+3][b+3]+D[a][b][c]/C[a][b][c]-A[a][b];
	      }

    return 0;
}