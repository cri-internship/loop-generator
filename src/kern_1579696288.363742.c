#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(700, 610, "ones");
	int ***B = create_three_dim_int(630, 480, 700, "ones");
	int **D = create_two_dim_int(370, 560, "ones");
	int **C = create_two_dim_int(820, 150, "ones");
	int **A = create_two_dim_int(140, 310, "ones");

	for (int c = 0; c < 695; c++)
	  for (int b = 2; b < 150; b++)
	    for (int a = 4; a < 370; a++)
	    {
	      
	      D[a][b]=D[a-4][b-1]*23;
	      
	      C[a][b]=C[a-4][b]/47;
	      
	      int var_a=B[a][b][c]+32;
	      int var_b=B[a][b+1][c+5]/7;
	      
	      E[a][b]=E[a][b]*C[a][b]-D[a][b]/A[a][b];
	      B[a][b][c]=E[a-1][b-2]*B[a][b][c]/C[a][b];
	    }

    return 0;
}