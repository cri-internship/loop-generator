#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(90, 720, 780, "ones");
	int ***B = create_three_dim_int(50, 490, 590, "ones");
	int **D = create_two_dim_int(370, 120, "ones");
	int ***A = create_three_dim_int(220, 290, 950, "ones");

	for (int c = 3; c < 585; c++)
	  for (int b = 5; b < 118; b++)
	    for (int a = 3; a < 46; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-5][c-3]+39;
	      
	      A[a][b][c]=A[a][b-2][c-1]-25/B[a][b][c];
	      
	      A[a][b][c]=A[a+3][b][c+5]-27;
	      
	      D[a][b]=D[a+3][b+2]+A[a][b][c]/A[a][b][c];
	      
	      B[a][b][c]=B[a+4][b][c+5]/48;
	      
	      D[a][b]=B[a][b][c]*C[a][b][c]/A[a][b][c];
	      
	      int var_a=B[a][b][c]/20;
	      int var_b=B[a+1][b+3][c+3]*12;
	    }

    return 0;
}