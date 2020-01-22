#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(640, 490, "zeros");
	int ***A = create_three_dim_int(60, 160, 980, "zeros");
	int *B = create_one_dim_int(600, "zeros");
	int **E = create_two_dim_int(410, 210, "zeros");
	int ***C = create_three_dim_int(70, 500, 450, "zeros");

	for (int c = 2; c < 446; c++)
	  for (int b = 5; b < 160; b++)
	    for (int a = 4; a < 60; a++)
	    {
	      
	      B[a]=B[a-2]+C[a][b][c];
	      
	      C[a][b][c]=C[a-2][b-5][c-2]*4;
	      
	      A[a][b][c]=17;
	      A[a-4][b-3][c-2]=4;
	      
	      C[a][b][c]=A[a][b][c]*B[a]-E[a][b]+D[a][b];
	      
	      int var_a=B[a]*18;
	      int var_b=B[a+5]*36;
	      
	      int var_c=C[a][b][c]-7;
	      int var_d=C[a][b+2][c+4]/40;
	      
	      int var_e=C[a][b][c]*48;
	      int var_f=C[a+2][b+3][c+1]/47;
	    }

    return 0;
}