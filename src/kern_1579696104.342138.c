#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(380, 250, "ones");
	int **D = create_two_dim_int(780, 40, "ones");
	int ***A = create_three_dim_int(480, 100, 420, "ones");
	int *C = create_one_dim_int(960, "ones");

	for (int c = 3; c < 416; c++)
	  for (int b = 3; b < 97; b++)
	    for (int a = 4; a < 380; a++)
	    {
	      
	      B[a][b]=B[a-4][b-3]-39/A[a][b][c]+D[a][b];
	      
	      A[a][b][c]=A[a-1][b-1][c-3]-10;
	      
	      A[a][b][c]=A[a+2][b][c+4]+B[a][b]-C[a]*D[a][b];
	      
	      B[a][b]=C[a]*B[a][b]-4/A[a][b][c];
	      C[a]=A[a][b][c]+B[a][b];
	      
	      A[a][b][c]=A[a+1][b+3][c+1]*30;
	    }

    return 0;
}