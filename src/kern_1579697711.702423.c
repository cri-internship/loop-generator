#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(730, 980, 640, "ones");
	int **C = create_two_dim_int(610, 590, "ones");
	int **E = create_two_dim_int(300, 270, "ones");
	int ***A = create_three_dim_int(370, 20, 70, "ones");
	int **B = create_two_dim_int(140, 210, "ones");

	for (int c = 4; c < 70; c++)
	  for (int b = 5; b < 20; b++)
	    for (int a = 5; a < 139; a++)
	    {
	      
	      E[a][b]=E[a-1][b]+47;
	      
	      B[a][b]=B[a-5][b-5]*15;
	      
	      B[a][b]=B[a+1][b+2]/E[a][b]-A[a][b][c]*C[a][b];
	      
	      A[a][b][c]=33;
	      A[a-1][b-4][c]=1;
	      
	      D[a][b][c]=43;
	      D[a-4][b-4][c-4]=5;
	    }

    return 0;
}