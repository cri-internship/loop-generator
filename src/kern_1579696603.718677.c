#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(920, 320, 350, "zeros");
	int *B = create_one_dim_int(780, "zeros");
	int ***A = create_three_dim_int(380, 390, 530, "zeros");

	for (int c = 0; c < 345; c++)
	  for (int b = 0; b < 320; b++)
	    for (int a = 0; a < 377; a++)
	    {
	      
	      C[a][b][c]=B[a]/23+A[a][b][c];
	      B[a]=A[a][b][c];
	      
	      B[a]=B[a+3]*9;
	      
	      C[a][b][c]=C[a+5][b][c+5]-32;
	      
	      int var_a=A[a][b][c]*37;
	      int var_b=A[a+3][b+4][c+5]/1;
	      
	      int var_c=A[a][b][c]/50;
	      int var_d=A[a+2][b+4][c]+18;
	    }

    return 0;
}