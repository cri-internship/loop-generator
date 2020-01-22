#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(300, "ones");
	int ***C = create_three_dim_int(210, 960, 430, "ones");
	int **B = create_two_dim_int(350, 270, "ones");

	for (int c = 1; c < 428; c++)
	  for (int b = 5; b < 266; b++)
	    for (int a = 5; a < 207; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b-5][c-1]-0;
	      
	      C[a][b][c]=C[a+3][b+3][c+2]+6;
	      
	      A[a]=A[a+4]*C[a][b][c]-B[a][b];
	      
	      A[a]=14;
	      
	      B[a][b]=A[a]/C[a][b][c];
	      B[a-1][b-5]=A[a]+28;
	      
	      int var_a=C[a][b][c]+36;
	      int var_b=C[a-1][b-4][c-1]-46;
	      
	      int var_c=B[a][b]-40;
	      int var_d=B[a+5][b+4]+33;
	    }

    return 0;
}