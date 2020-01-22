#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(340, 890, 740, "zeros");
	int **B = create_two_dim_int(460, 270, "zeros");
	int ***A = create_three_dim_int(490, 790, 830, "zeros");
	int **D = create_two_dim_int(350, 950, "zeros");

	for (int c = 0; c < 825; c++)
	  for (int b = 5; b < 267; b++)
	    for (int a = 4; a < 350; a++)
	    {
	      
	      D[a][b]=D[a-1][b-5]+44;
	      
	      B[a][b]=42;
	      B[a-4][b-4]=32;
	      
	      A[a][b][c]=D[a][b]-B[a][b]/C[a][b][c];
	      A[a+2][b][c+1]=B[a][b]/D[a][b]+C[a][b][c];
	      
	      B[a][b]=A[a][b][c]/D[a][b];
	      D[a][b]=A[a][b+1][c+5]-B[a][b];
	      
	      C[a][b][c]=B[a][b]/A[a][b][c]+D[a][b]-C[a][b][c];
	      A[a][b][c]=B[a-2][b]-D[a][b]+A[a][b][c]*C[a][b][c];
	      
	      int var_a=B[a][b]-22;
	      int var_b=B[a+1][b]/19;
	      
	      int var_c=B[a][b]+36;
	      int var_d=B[a][b+3]/30;
	    }

    return 0;
}