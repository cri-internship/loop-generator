#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(780, 240, "ones");
	int ***D = create_three_dim_int(30, 390, 420, "ones");
	int ***A = create_three_dim_int(680, 650, 10, "ones");
	int **B = create_two_dim_int(630, 490, "ones");

	for (int c = 2; c < 6; c++)
	  for (int b = 3; b < 235; b++)
	    for (int a = 0; a < 28; a++)
	    {
	      
	      C[a][b]=C[a+3][b+5]*A[a][b][c]-B[a][b];
	      
	      A[a][b][c]=A[a][b+2][c+4]-C[a][b]*D[a][b][c]/B[a][b];
	      
	      B[a][b]=B[a+2][b]-A[a][b][c]/D[a][b][c]+C[a][b];
	      
	      D[a][b][c]=A[a][b][c]+C[a][b];
	      D[a+2][b+3][c+2]=B[a][b]/A[a][b][c]+C[a][b];
	      
	      D[a][b][c]=8;
	    }

    return 0;
}