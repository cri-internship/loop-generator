#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(440, 570, 1000, "ones");
	int **A = create_two_dim_int(640, 730, "ones");
	int ***E = create_three_dim_int(940, 410, 80, "ones");
	int *C = create_one_dim_int(730, "ones");
	int **B = create_two_dim_int(410, 90, "ones");

	for (int c = 0; c < 1000; c++)
	  for (int b = 4; b < 90; b++)
	    for (int a = 4; a < 410; a++)
	    {
	      
	      B[a][b]=B[a-3][b]-A[a][b];
	      
	      D[a][b][c]=C[a]-D[a][b][c]+B[a][b]*E[a][b][c]/A[a][b];
	      C[a]=22-E[a][b][c]+A[a][b]*D[a][b][c];
	      
	      D[a][b][c]=D[a][b+1][c]-C[a]*4+B[a][b]/E[a][b][c];
	      
	      A[a][b]=B[a][b]*D[a][b][c]+E[a][b][c]/C[a];
	      A[a-4][b-2]=1;
	      
	      A[a][b]=20;
	      
	      int var_a=D[a][b][c]/41;
	      int var_b=D[a-4][b-4][c]*10;
	      
	      int var_c=D[a][b][c]-48;
	      int var_d=D[a+1][b+4][c]*46;
	    }

    return 0;
}