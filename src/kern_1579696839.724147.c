#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(290, "ones");
	int *A = create_one_dim_int(300, "ones");
	int ***B = create_three_dim_int(770, 370, 90, "ones");
	int *C = create_one_dim_int(590, "ones");
	int ***D = create_three_dim_int(510, 440, 870, "ones");

	for (int c = 4; c < 90; c++)
	  for (int b = 2; b < 370; b++)
	    for (int a = 5; a < 290; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-1][c-3]+8;
	      
	      A[a]=D[a][b][c]/B[a][b][c]-E[a]+33;
	      B[a][b][c]=A[a]/E[a]*B[a][b][c]+D[a][b][c]-C[a];
	      
	      B[a][b][c]=B[a-5][b-2][c-4]/40;
	      
	      E[a]=C[a]*A[a];
	      C[a]=E[a];
	      
	      D[a][b][c]=B[a][b][c]-C[a];
	      D[a+5][b+2][c+3]=B[a][b][c]/E[a]*C[a]+A[a];
	      
	      int var_a=E[a]*49;
	      int var_b=E[a-2]-32;
	    }

    return 0;
}