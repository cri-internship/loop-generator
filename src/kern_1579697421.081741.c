#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(780, 370, 310, "zeros");
	int *B = create_one_dim_int(140, "zeros");
	int *D = create_one_dim_int(740, "zeros");
	int **C = create_two_dim_int(630, 350, "zeros");

	for (int b = 4; b < 369; b++)
	  for (int a = 2; a < 137; a++)
	  {
	    
	     B[a]=C[a][b]/D[a];
	     B[a+3]=A[a][b][a]-A[a][b][a]*C[a][b];
	    
	     A[a][b][a]=B[a]+B[a]*C[a][b];
	     A[a-2][b-4][a-1]=4-C[a][b]+D[a];
	    
	     A[a][b][a]=A[a][b][a]/D[a];
	     C[a][b]=A[a+5][b+1][a]-B[a]/D[a]*C[a][b];
	  }

    return 0;
}