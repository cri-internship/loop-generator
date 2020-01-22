#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(40, "ones");
	int *A = create_one_dim_int(980, "ones");
	int ***D = create_three_dim_int(300, 970, 30, "ones");
	int **B = create_two_dim_int(550, 180, "ones");

	for (int c = 5; c < 26; c++)
	  for (int b = 3; b < 175; b++)
	    for (int a = 2; a < 300; a++)
	    {
	      
	      A[a]=A[a-2]/C[a];
	      
	      B[a][b]=B[a+5][b+5]/14;
	      
	      D[a][b][c]=41;
	      D[a][b+1][c+4]=15;
	      
	      A[a]=B[a][b]-C[a]*D[a][b][c];
	      
	      B[a][b]=D[a][b][c]+A[a];
	      A[a]=D[a-2][b-3][c-5]+B[a][b]*4-A[a];
	    }

    return 0;
}