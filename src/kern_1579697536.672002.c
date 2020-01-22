#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(310, 380, 910, "zeros");
	int **A = create_two_dim_int(870, 380, "zeros");
	int **C = create_two_dim_int(700, 870, "zeros");
	int *D = create_one_dim_int(520, "zeros");

	for (int c = 0; c < 910; c++)
	  for (int b = 5; b < 375; b++)
	    for (int a = 5; a < 308; a++)
	    {
	      
	      A[a][b]=A[a-5][b-4]-28;
	      
	      A[a][b]=A[a-4][b-1]-18;
	      
	      C[a][b]=C[a+2][b]-6;
	      
	      int var_a=A[a][b]-48;
	      int var_b=A[a-1][b-5]+46;
	      
	      B[a][b][c]=B[a][b][c]/A[a][b];
	      D[a]=B[a-3][b-4][c]*C[a][b]-D[a]/A[a][b];
	      
	      int var_c=A[a][b]/14;
	      int var_d=A[a][b+5]-26;
	      
	      C[a][b]=B[a][b][c]+D[a]*22;
	      A[a][b]=B[a+2][b+3][c]-12+A[a][b];
	    }

    return 0;
}