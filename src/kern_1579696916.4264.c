#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(220, 330, "zeros");
	int ***E = create_three_dim_int(100, 850, 930, "zeros");
	int *A = create_one_dim_int(170, "zeros");
	int ***C = create_three_dim_int(70, 990, 350, "zeros");
	int ***B = create_three_dim_int(720, 530, 520, "zeros");

	for (int c = 4; c < 345; c++)
	  for (int b = 5; b < 330; b++)
	    for (int a = 4; a < 66; a++)
	    {
	      
	      D[a][b]=D[a-3][b-1]-B[a][b][c]+35;
	      
	      C[a][b][c]=C[a][b+2][c]+20;
	      
	      B[a][b][c]=B[a+3][b+5][c+2]/33;
	      
	      C[a][b][c]=12;
	      
	      E[a][b][c]=42;
	      E[a-4][b-5][c-4]=13;
	      
	      D[a][b]=A[a]/C[a][b][c]-B[a][b][c]*E[a][b][c];
	      
	      int var_a=C[a][b][c]/27;
	      int var_b=C[a+4][b+2][c+5]-36;
	    }

    return 0;
}