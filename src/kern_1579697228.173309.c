#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(900, "zeros");
	int ***B = create_three_dim_int(190, 960, 650, "zeros");
	int **A = create_two_dim_int(110, 710, "zeros");
	int ***D = create_three_dim_int(850, 250, 900, "zeros");
	int ***E = create_three_dim_int(510, 50, 630, "zeros");

	for (int d = 3; d < 626; d++)
	  for (int c = 3; c < 49; c++)
	    for (int b = 5; b < 190; b++)
	      for (int a = 5; a < 190; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b][c]/14-D[a][b][c];
	        
	       C[a]=C[a+1]-39;
	        
	       E[a][b][c]=B[a][b][c]*C[a]-B[a][b][c];
	       E[a-5][b-3][c-2]=D[a][b][c]*B[a][b][c];
	        
	       C[a]=24;
	        
	       E[a][b][c]=E[a][b][c]*B[a][b][c]/C[a];
	       B[a][b][c]=E[a+1][b+1][c+4]/B[a][b][c]*A[a][b]-D[a][b][c]+C[a];
	        
	       A[a][b]=B[a][b][c]-E[a][b][c]+E[a][b][c]/D[a][b][c]*C[a];
	       D[a][b][c]=B[a-3][b-3][c-3]/C[a]-E[a][b][c]*A[a][b]+D[a][b][c];
	        
	       C[a]=D[a][b][c]-E[a][b][c];
	       C[a]=D[a-3][b-2][c-1]/C[a];
	      }

    return 0;
}