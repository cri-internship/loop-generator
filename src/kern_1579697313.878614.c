#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(650, "zeros");
	int *A = create_one_dim_int(100, "zeros");
	int ***C = create_three_dim_int(390, 720, 320, "zeros");

	for (int c = 0; c < 318; c++)
	  for (int b = 1; b < 716; b++)
	    for (int a = 2; a < 95; a++)
	    {
	      
	      C[a][b][c]=A[a]/B[a];
	      C[a][b+4][c+2]=12;
	      
	      C[a][b][c]=B[a];
	      
	      A[a]=C[a][b][c]*B[a];
	      A[a+5]=B[a]*23;
	      
	      int var_a=B[a]/48;
	      int var_b=B[a-2]-12;
	      
	      int var_c=C[a][b][c]*11;
	      int var_d=C[a][b-1][c]*39;
	      
	      int var_e=B[a]*17;
	      int var_f=B[a+4]*13;
	    }

    return 0;
}