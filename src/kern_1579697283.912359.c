#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(960, 770, 350, "ones");
	int ***B = create_three_dim_int(320, 420, 670, "ones");
	int ***A = create_three_dim_int(860, 550, 20, "ones");
	int **C = create_two_dim_int(740, 190, "ones");

	for (int c = 5; c < 20; c++)
	  for (int b = 2; b < 190; b++)
	    for (int a = 4; a < 320; a++)
	    {
	      
	      C[a][b]=C[a-4][b-2]-A[a][b][c]/D[a][b][c];
	      
	      D[a][b][c]=D[a+1][b+5][c+4]/C[a][b]*30;
	      
	      A[a][b][c]=B[a][b][c]*C[a][b]/D[a][b][c];
	      A[a-2][b-2][c-5]=D[a][b][c];
	      
	      int var_a=B[a][b][c]*29;
	      int var_b=B[a-1][b-2][c-4]+44;
	    }

    return 0;
}