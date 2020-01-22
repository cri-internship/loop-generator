#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(640, 290, 540, "ones");
	int *A = create_one_dim_int(910, "ones");
	int ***D = create_three_dim_int(590, 20, 890, "ones");
	int **C = create_two_dim_int(190, 390, "ones");
	int **E = create_two_dim_int(780, 60, "ones");

	for (int d = 4; d < 540; d++)
	  for (int c = 5; c < 58; c++)
	    for (int b = 5; b < 640; b++)
	      for (int a = 5; a < 640; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-4][c-4]*33;
	        
	       E[a][b]=E[a-1][b-5]/C[a][b]+B[a][b][c];
	        
	       E[a][b]=E[a+4][b+2]/D[a][b][c];
	        
	       E[a][b]=B[a][b][c]+A[a]-E[a][b];
	       B[a][b][c]=B[a-5][b-1][c-4]/A[a]-D[a][b][c];
	        
	       int var_a=B[a][b][c]+34;
	       int var_b=B[a-3][b-1][c-3]-27;
	        
	       int var_c=B[a][b][c]/20;
	       int var_d=B[a-2][b-3][c]*41;
	      }

    return 0;
}