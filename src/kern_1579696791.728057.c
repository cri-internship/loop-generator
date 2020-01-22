#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(820, "zeros");
	int ***A = create_three_dim_int(740, 860, 640, "zeros");
	int *D = create_one_dim_int(790, "zeros");
	int *B = create_one_dim_int(270, "zeros");
	int ***E = create_three_dim_int(470, 360, 920, "zeros");

	for (int c = 5; c < 640; c++)
	  for (int b = 4; b < 360; b++)
	    for (int a = 3; a < 270; a++)
	    {
	      
	      B[a]=B[a-3]*23;
	      
	      A[a][b][c]=A[a-2][b-4][c-5]-34;
	      
	      int var_a=E[a][b][c]-14;
	      int var_b=E[a][b-2][c-1]/1;
	    }

    return 0;
}