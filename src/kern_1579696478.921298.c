#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(290, 890, 50, "ones");
	int **C = create_two_dim_int(210, 620, "ones");
	int **B = create_two_dim_int(260, 940, "ones");

	for (int c = 1; c < 49; c++)
	  for (int b = 4; b < 615; b++)
	    for (int a = 0; a < 208; a++)
	    {
	      
	      A[a][b][c]=A[a][b-4][c-1]-C[a][b];
	      
	      B[a][b]=B[a][b-3]/0;
	      
	      B[a][b]=B[a+2][b+4]/23;
	      
	      C[a][b]=46;
	      C[a+1][b+5]=21;
	      
	      B[a][b]=C[a][b]-B[a][b]/A[a][b][c];
	      C[a][b]=C[a+2][b+5]-B[a][b];
	      
	      A[a][b][c]=A[a][b][c]-C[a][b];
	      C[a][b]=A[a][b+1][c+1]/23;
	    }

    return 0;
}