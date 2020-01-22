#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(190, 920, 960, "random");
	int *B = create_one_dim_int(170, "random");
	int ***A = create_three_dim_int(190, 510, 680, "random");
	int ***D = create_three_dim_int(390, 350, 670, "random");

	for (int c = 5; c < 666; c++)
	  for (int b = 4; b < 346; b++)
	    for (int a = 5; a < 170; a++)
	    {
	      
	      B[a]=B[a-5]*32;
	      
	      A[a][b][c]=A[a][b-4][c]/C[a][b][c]+D[a][b][c]-B[a];
	      
	      A[a][b][c]=A[a-4][b-3][c-5]+B[a]-34;
	      
	      D[a][b][c]=A[a][b][c]/A[a][b][c];
	      D[a][b+4][c+4]=A[a][b][c];
	      
	      A[a][b][c]=A[a][b][c]*D[a][b][c]-C[a][b][c]+B[a];
	      D[a][b][c]=A[a+4][b+2][c+5]+C[a][b][c]*43;
	    }

    return 0;
}