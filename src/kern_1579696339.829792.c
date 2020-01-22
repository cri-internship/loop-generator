#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(270, "zeros");
	int **C = create_two_dim_int(250, 190, "zeros");
	int ***A = create_three_dim_int(800, 860, 360, "zeros");

	for (int c = 0; c < 358; c++)
	  for (int b = 4; b < 189; b++)
	    for (int a = 3; a < 250; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-4][c]+B[a]*C[a][b];
	      
	      C[a][b]=C[a-1][b-2]*16;
	      
	      A[a][b][c]=A[a+5][b+2][c+2]+C[a][b];
	      
	      A[a][b][c]=39;
	      
	      int var_b=C[a][b]+38;
	      int var_c=C[a][b+1]-47;
	      
	      int var_d=B[a]*32;
	      int var_e=B[a+2]-17;
	      
	      int var_f=C[a][b]-44;
	      int var_g=C[a-1][b-4]-37;
	    }

    return 0;
}