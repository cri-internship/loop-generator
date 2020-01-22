#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(190, "zeros");
	int ***A = create_three_dim_int(800, 790, 90, "zeros");
	int **C = create_two_dim_int(600, 720, "zeros");
	int *D = create_one_dim_int(180, "zeros");

	for (int c = 5; c < 90; c++)
	  for (int b = 4; b < 717; b++)
	    for (int a = 5; a < 178; a++)
	    {
	      
	      C[a][b]=C[a+1][b+3]-36;
	      
	      A[a][b][c]=D[a]-C[a][b];
	      A[a-4][b-4][c-2]=B[a]-D[a];
	      
	      B[a]=A[a][b][c];
	      B[a-5]=C[a][b];
	      
	      int var_a=A[a][b][c]/0;
	      int var_b=A[a][b][c-5]+50;
	      
	      C[a][b]=A[a][b][c]-49;
	      A[a][b][c]=A[a][b+1][c]-D[a]/B[a];
	      
	      D[a]=D[a]*11;
	      B[a]=D[a+2]-B[a];
	      
	      int var_c=C[a][b]/43;
	      int var_d=C[a-3][b-2]/44;
	    }

    return 0;
}