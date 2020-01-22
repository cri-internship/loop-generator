#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(290, 550, 330, "random");
	int ***A = create_three_dim_int(430, 250, 450, "random");
	int ***C = create_three_dim_int(710, 880, 960, "random");
	int **D = create_two_dim_int(560, 540, "random");

	for (int c = 1; c < 449; c++)
	  for (int b = 3; b < 247; b++)
	    for (int a = 2; a < 430; a++)
	    {
	      
	      D[a][b]=D[a+2][b+4]/C[a][b][c]-A[a][b][c]*B[a][b][c];
	      
	      C[a][b][c]=48;
	      C[a-2][b-3][c-1]=17;
	      
	      A[a][b][c]=D[a][b]*D[a][b]-C[a][b][c];
	      A[a][b+3][c+1]=B[a][b][c]/D[a][b];
	    }

    return 0;
}