#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(140, 630, "zeros");
	int *D = create_one_dim_int(440, "zeros");
	int ***A = create_three_dim_int(360, 340, 50, "zeros");
	int **C = create_two_dim_int(670, 220, "zeros");
	int *E = create_one_dim_int(200, "zeros");

	for (int c = 5; c < 45; c++)
	  for (int b = 0; b < 215; b++)
	    for (int a = 5; a < 196; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b][c-5]*E[a]-C[a][b];
	      
	      D[a]=D[a+5]+10;
	      
	      C[a][b]=C[a+2][b+5]-38;
	      
	      E[a]=E[a+4]*12;
	      
	      A[a][b][c]=47;
	      
	      int var_a=D[a]*9;
	      int var_b=D[a+4]/26;
	    }

    return 0;
}