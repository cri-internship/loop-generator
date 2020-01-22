#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(160, 520, "zeros");
	int ***B = create_three_dim_int(180, 510, 210, "zeros");
	int ***C = create_three_dim_int(340, 960, 550, "zeros");
	int **E = create_two_dim_int(540, 320, "zeros");
	int **D = create_two_dim_int(550, 460, "zeros");

	for (int d = 2; d < 210; d++)
	  for (int c = 1; c < 317; c++)
	    for (int b = 5; b < 180; b++)
	      for (int a = 5; a < 180; a++)
	      {
	        
	       E[a][b]=E[a-5][b-1]/B[a][b][c]+A[a][b]-31;
	        
	       B[a][b][c]=B[a-1][b-1][c-2]+D[a][b]*E[a][b]/C[a][b][c]-A[a][b];
	        
	       C[a][b][c]=C[a+2][b+3][c+4]*23;
	        
	       C[a][b][c]=C[a][b][c+2]*A[a][b]-B[a][b][c]/E[a][b]+D[a][b];
	        
	       B[a][b][c]=E[a][b]*A[a][b]+D[a][b];
	        
	       E[a][b]=39;
	      }

    return 0;
}