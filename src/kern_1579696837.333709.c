#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(850, 710, 680, "random");
	int *E = create_one_dim_int(470, "random");
	int *B = create_one_dim_int(950, "random");
	int ***D = create_three_dim_int(350, 70, 880, "random");
	int ***C = create_three_dim_int(960, 700, 350, "random");

	for (int c = 5; c < 350; c++)
	  for (int b = 5; b < 70; b++)
	    for (int a = 5; a < 350; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-3][c-5]-35;
	      
	      C[a][b][c]=50;
	      
	      E[a]=B[a]/A[a][b][c]*C[a][b][c]+D[a][b][c];
	      E[a-3]=A[a][b][c]-C[a][b][c];
	      
	      D[a][b][c]=16;
	      D[a-2][b-1][c-5]=4;
	      
	      E[a]=A[a][b][c]-E[a]*D[a][b][c];
	      A[a][b][c]=A[a+4][b+5][c+1]/C[a][b][c];
	      
	      C[a][b][c]=E[a]+A[a][b][c]/C[a][b][c]*D[a][b][c]-B[a];
	      D[a][b][c]=E[a-5]*B[a]/D[a][b][c]-A[a][b][c]+C[a][b][c];
	    }

    return 0;
}