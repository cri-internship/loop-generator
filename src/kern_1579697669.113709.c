#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(880, 30, 190, "ones");
	int **D = create_two_dim_int(340, 50, "ones");
	int ***B = create_three_dim_int(160, 1000, 730, "ones");
	int ***A = create_three_dim_int(750, 120, 370, "ones");

	for (int c = 5; c < 187; c++)
	  for (int b = 3; b < 29; b++)
	    for (int a = 5; a < 160; a++)
	    {
	      
	      B[a][b][c]=D[a][b]+C[a][b][c]/A[a][b][c];
	      B[a-2][b-1][c-1]=D[a][b];
	      
	      A[a][b][c]=45-B[a][b][c]/C[a][b][c];
	      A[a+5][b+3][c+4]=C[a][b][c]*B[a][b][c];
	      
	      C[a][b][c]=A[a][b][c]*D[a][b];
	      C[a][b+1][c+3]=A[a][b][c]/D[a][b];
	      
	      int var_a=D[a][b]/40;
	      int var_b=D[a-5][b-3]+28;
	      
	      int var_c=B[a][b][c]*18;
	      int var_d=B[a][b-2][c-5]*30;
	    }

    return 0;
}