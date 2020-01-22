#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(970, 10, "zeros");
	int **B = create_two_dim_int(920, 980, "zeros");
	int ***A = create_three_dim_int(850, 310, 630, "zeros");
	int ***C = create_three_dim_int(530, 810, 380, "zeros");
	int *E = create_one_dim_int(200, "zeros");

	for (int b = 2; b < 10; b++)
	  for (int a = 5; a < 195; a++)
	  {
	    
	     D[a][b]=D[a-5][b-2]*E[a];
	    
	     C[a][b][a]=C[a-1][b-1][a-2]+9;
	    
	     D[a][b]=D[a+4][b]/44;
	    
	     E[a]=E[a+5]/A[a][b][a]-C[a][b][a]+D[a][b]*B[a][b];
	    
	     B[a][b]=E[a];
	     B[a-4][b-1]=D[a][b];
	    
	     A[a][b][a]=A[a][b][a]/35*D[a][b]+B[a][b];
	     D[a][b]=A[a+4][b+1][a+3]-B[a][b]/E[a]*30;
	    
	     E[a]=E[a]-D[a][b];
	     B[a][b]=E[a-3]/B[a][b]*C[a][b][a]-A[a][b][a]+D[a][b];
	  }

    return 0;
}