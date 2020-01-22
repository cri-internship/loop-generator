#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(360, 990, 510, "zeros");
	int **B = create_two_dim_int(160, 510, "zeros");
	int **C = create_two_dim_int(840, 150, "zeros");
	int ***A = create_three_dim_int(70, 310, 840, "zeros");

	for (int c = 3; c < 506; c++)
	  for (int b = 5; b < 145; b++)
	    for (int a = 2; a < 66; a++)
	    {
	      
	      B[a][b]=B[a-2][b-5]/35;
	      
	      A[a][b][c]=A[a+4][b+3][c]/22;
	      
	      A[a][b][c]=B[a][b]*C[a][b];
	      
	      D[a][b][c]=22;
	      D[a][b+1][c+4]=46;
	      
	      B[a][b]=C[a][b]+28;
	      C[a][b]=C[a+1][b+5]-A[a][b][c];
	      
	      A[a][b][c]=A[a][b][c]/21*C[a][b];
	      D[a][b][c]=A[a][b-2][c-2]*C[a][b]-B[a][b];
	      
	      B[a][b]=A[a][b][c]+B[a][b]*D[a][b][c]/C[a][b];
	      D[a][b][c]=A[a-1][b-3][c-1]/B[a][b]*D[a][b][c];
	    }

    return 0;
}