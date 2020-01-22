#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(110, "zeros");
	int **E = create_two_dim_int(570, 240, "zeros");
	int ***C = create_three_dim_int(960, 310, 460, "zeros");
	int **A = create_two_dim_int(720, 530, "zeros");
	int **D = create_two_dim_int(970, 20, "zeros");

	for (int d = 0; d < 457; d++)
	  for (int c = 3; c < 20; c++)
	    for (int b = 5; b < 110; b++)
	      for (int a = 5; a < 110; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b-3][c]/A[a][b];
	        
	       A[a][b]=A[a-5][b-3]/2;
	        
	       E[a][b]=E[a+5][b+1]+D[a][b]-B[a]/C[a][b][c]*C[a][b][c];
	        
	       C[a][b][c]=C[a+4][b+2][c+1]/E[a][b]+B[a]-D[a][b];
	        
	       C[a][b][c]=C[a+2][b+5][c+3]*B[a];
	        
	       B[a]=10;
	       B[a-4]=22;
	        
	       int var_a=D[a][b]-28;
	       int var_b=D[a-2][b]/45;
	      }

    return 0;
}