#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(540, 390, "random");
	int ***A = create_three_dim_int(800, 600, 640, "random");
	int *D = create_one_dim_int(1000, "random");
	int **B = create_two_dim_int(40, 400, "random");

	for (int c = 0; c < 636; c++)
	  for (int b = 4; b < 385; b++)
	    for (int a = 5; a < 40; a++)
	    {
	      
	      C[a][b]=C[a-4][b-2]-22;
	      
	      A[a][b][c]=A[a+5][b+1][c+4]*9;
	      
	      C[a][b]=C[a][b+5]-6;
	      
	      D[a]=B[a][b]/C[a][b]+D[a]-A[a][b][c];
	      B[a][b]=B[a-5][b-4]/A[a][b][c]-C[a][b]*D[a];
	      
	      A[a][b][c]=D[a]*B[a][b]-B[a][b];
	      C[a][b]=D[a-1]-C[a][b]+B[a][b]*A[a][b][c];
	    }

    return 0;
}