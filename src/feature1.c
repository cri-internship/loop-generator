#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 50);
	int ***C = create_three_dim_int(50, 50, 50);
	int *A = create_one_dim_int(100);

	for (int c = 0; c < 50; c++)
	  for (int b = 0; b < 46; b++)
	    for (int a = 0; a < 47; a++)
	    {
	      
	      C[a][b][c]=0.27919;
	      int var_a=C[a][b][c]*0.54861;
	      
	      A[a]=A[a-1]-0.18898;
	      
	      int var_b=C[a][b][c]+0.60715;
	      C[a][b][c]=0.98126;
	      
	      A[a]=A[a+1]/0.57958;
	      
	      C[a][b][c]=0.35166;
	      C[a][b][c]=0.38061;
	      
	      B[a+1][b+1]=0.1655;
	      B[a+1][b+1]=0.55766;
	      
	      int var_c=C[a][b][c]+0.31367;
	      int var_d=C[a][b][c]/0.06117;
	      
	      int var_e=A[a+1]-0.23238;
	      int var_f=A[a+1]*0.24557;
	    }

    return 0;
}