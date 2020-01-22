#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(870, 100, 460, "ones");
	int ***B = create_three_dim_int(390, 60, 820, "ones");
	int ***D = create_three_dim_int(610, 510, 290, "ones");
	int *A = create_one_dim_int(610, "ones");

	for (int c = 4; c < 286; c++)
	  for (int b = 0; b < 60; b++)
	    for (int a = 5; a < 390; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b][c-4]*D[a][b][c]+A[a]-C[a][b][c];
	      
	      D[a][b][c]=D[a+2][b+2][c]-1;
	      
	      D[a][b][c]=D[a][b+1][c+4]+B[a][b][c]-C[a][b][c]/A[a];
	      
	      C[a][b][c]=C[a+2][b+4][c+1]+A[a]*B[a][b][c]/D[a][b][c];
	      
	      B[a][b][c]=30;
	      
	      int var_a=C[a][b][c]-42;
	      int var_b=C[a+2][b+5][c+5]/20;
	    }

    return 0;
}