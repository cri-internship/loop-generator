#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(330, 920, 390, "random");
	double **C = create_two_dim_double(920, 420, "random");
	double ***D = create_three_dim_double(160, 540, 640, "random");
	double ***A = create_three_dim_double(650, 910, 220, "random");

	for (int c = 5; c < 220; c++)
	  for (int b = 5; b < 910; b++)
	    for (int a = 2; a < 650; a++)
	    {
	      
	      A[a][b][c]=0.228;
	      A[a][b-4][c-1]=0.014;
	      
	      D[a][b][c]=A[a][b][c]-C[a][b];
	      B[a][b][c]=A[a-2][b-5][c-5]+D[a][b][c]*0.346;
	    }

    return 0;
}