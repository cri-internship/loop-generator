#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(200, "zeros");
	int **D = create_two_dim_int(890, 420, "zeros");
	int *E = create_one_dim_int(30, "zeros");
	int ***B = create_three_dim_int(70, 980, 320, "zeros");
	int *C = create_one_dim_int(680, "zeros");

	for (int c = 0; c < 417; c++)
	  for (int b = 0; b < 27; b++)
	    for (int a = 0; a < 27; a++)
	    {
	      
	      E[a]=36;
	      float  var_a=E[a]+3;
	      
	      E[a]=E[a+3]/25;
	      
	      A[a]=A[a+2]-31;
	      
	      int var_b=D[a][b]/6;
	      int var_c=D[a+2][b+3]/31;
	      
	      E[a]=D[a][b]*E[a]+E[a]/A[a];
	      B[a][b][c]=D[a+1][b]/A[a]-E[a]*B[a][b][c]+C[a];
	    }

    return 0;
}