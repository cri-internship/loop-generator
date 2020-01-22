#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(20, "ones");
	int ***A = create_three_dim_int(190, 420, 250, "ones");
	int ***E = create_three_dim_int(220, 40, 670, "ones");
	int ***B = create_three_dim_int(850, 100, 400, "ones");
	int *C = create_one_dim_int(960, "ones");

	for (int c = 3; c < 248; c++)
	  for (int b = 5; b < 40; b++)
	    for (int a = 3; a < 20; a++)
	    {
	      
	      E[a][b][c]=E[a-3][b-2][c-3]/B[a][b][c];
	      
	      D[a]=49;
	      float  var_a=D[a]-9;
	      
	      E[a][b][c]=E[a][b-5][c-2]*A[a][b][c];
	      
	      D[a]=A[a][b][c]*D[a];
	      C[a]=A[a][b+4][c+2]/11*C[a];
	    }

    return 0;
}