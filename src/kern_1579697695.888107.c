#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(50, "zeros");
	int **C = create_two_dim_int(640, 90, "zeros");
	int **A = create_two_dim_int(920, 570, "zeros");
	int ***B = create_three_dim_int(720, 190, 670, "zeros");

	for (int c = 0; c < 670; c++)
	  for (int b = 3; b < 85; b++)
	    for (int a = 5; a < 47; a++)
	    {
	      
	      D[a]=D[a+3]/48;
	      
	      B[a][b][c]=B[a+4][b+2][c]+D[a];
	      
	      A[a][b]=B[a][b][c]+C[a][b];
	      A[a-5][b-1]=B[a][b][c]+D[a]*C[a][b];
	      
	      C[a][b]=26;
	      C[a][b]=41;
	      
	      int var_a=A[a][b]+32;
	      int var_b=A[a-1][b-3]/37;
	    }

    return 0;
}