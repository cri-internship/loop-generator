#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(920, 220, 560, "random");
	int **A = create_two_dim_int(200, 360, "random");
	int ***C = create_three_dim_int(820, 380, 10, "random");
	int ***B = create_three_dim_int(630, 610, 580, "random");

	for (int c = 5; c < 560; c++)
	  for (int b = 4; b < 220; b++)
	    for (int a = 4; a < 196; a++)
	    {
	      
	      B[a][b][c]=B[a+5][b+5][c+5]-11;
	      
	      A[a][b]=A[a][b+1]+D[a][b][c]*4;
	      
	      D[a][b][c]=27;
	      D[a-4][b-1][c-5]=40;
	      
	      A[a][b]=A[a][b]+C[a][b][c]*C[a][b][c]/B[a][b][c];
	      D[a][b][c]=A[a+4][b+2]-12/D[a][b][c]+B[a][b][c];
	      
	      int var_a=A[a][b]*32;
	      int var_b=A[a+1][b+2]*8;
	      
	      int var_c=A[a][b]+14;
	      int var_d=A[a-2][b-4]/25;
	    }

    return 0;
}