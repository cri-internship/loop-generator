#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(330, 490, 260, "zeros");
	int **B = create_two_dim_int(470, 880, "zeros");
	int ***A = create_three_dim_int(460, 290, 120, "zeros");

	for (int c = 5; c < 255; c++)
	  for (int b = 4; b < 486; b++)
	    for (int a = 5; a < 325; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b-4][c-5]-A[a][b][c]*B[a][b];
	      
	      C[a][b][c]=C[a][b+4][c]+19;
	      
	      A[a][b][c]=C[a][b][c]+21/B[a][b];
	      B[a][b]=C[a+4][b][c+5]*A[a][b][c]/B[a][b];
	      
	      int var_a=C[a][b][c]*40;
	      int var_b=C[a+2][b+2][c+1]-3;
	      
	      int var_c=C[a][b][c]*19;
	      int var_d=C[a+5][b][c]/18;
	    }

    return 0;
}