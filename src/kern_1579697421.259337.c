#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(840, 690, 950, "zeros");
	int ***D = create_three_dim_int(140, 900, 230, "zeros");
	int **C = create_two_dim_int(570, 170, "zeros");
	int *A = create_one_dim_int(770, "zeros");

	for (int d = 5; d < 230; d++)
	  for (int c = 4; c < 170; c++)
	    for (int b = 5; b < 140; b++)
	      for (int a = 5; a < 140; a++)
	      {
	        
	       D[a][b][c]=D[a-1][b-4][c-5]-47;
	        
	       A[a]=A[a-4]+D[a][b][c]-B[a][b][c]*C[a][b];
	        
	       A[a]=A[a-5]/49;
	        
	       B[a][b][c]=B[a+2][b+3][c]/A[a];
	        
	       C[a][b]=C[a+1][b]+50;
	        
	       C[a][b]=30;
	      }

    return 0;
}