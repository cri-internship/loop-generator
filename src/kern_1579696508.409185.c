#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(810, 540, 390, "ones");
	float ***B = create_three_dim_float(820, 870, 490, "ones");
	float ***A = create_three_dim_float(50, 930, 470, "ones");

	for (int c = 4; c < 386; c++)
	  for (int b = 4; b < 537; b++)
	    for (int a = 2; a < 47; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-4][c-4]*C[a][b][c]-B[a][b][c];
	      
	      A[a][b][c]=A[a][b][c+4]-0.602;
	      
	      A[a][b][c]=A[a+3][b+2][c+2]*B[a][b][c];
	      
	      B[a][b][c]=0.139;
	      B[a-1][b-2][c-1]=0.068;
	      
	      C[a][b][c]=C[a][b][c]+A[a][b][c]/0.278;
	      A[a][b][c]=C[a+2][b+3][c+4]+A[a][b][c];
	      
	      float var_a=B[a][b][c]-0.936;
	      float var_b=B[a-2][b-1][c-1]/0.994;
	    }

    return 0;
}