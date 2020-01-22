#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(770, 640, 570, "zeros");
	int ***E = create_three_dim_int(140, 590, 920, "zeros");
	int **A = create_two_dim_int(380, 550, "zeros");
	int *D = create_one_dim_int(370, "zeros");
	int **C = create_two_dim_int(390, 230, "zeros");

	for (int d = 3; d < 570; d++)
	  for (int c = 4; c < 230; c++)
	    for (int b = 3; b < 137; b++)
	      for (int a = 3; a < 137; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-3][c-3]-C[a][b];
	        
	       E[a][b][c]=D[a]*B[a][b][c];
	       E[a+3][b+4][c+2]=A[a][b]/B[a][b][c]+A[a][b]-20;
	        
	       C[a][b]=E[a][b][c];
	       C[a-3][b-3]=D[a]*B[a][b][c]-E[a][b][c]/A[a][b];
	        
	       C[a][b]=C[a][b]+B[a][b][c]/35-E[a][b][c];
	       B[a][b][c]=C[a-1][b-4]/A[a][b]*E[a][b][c];
	      }

    return 0;
}