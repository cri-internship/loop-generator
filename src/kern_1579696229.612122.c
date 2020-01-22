#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(200, 170, 490, "random");
	int **C = create_two_dim_int(940, 340, "random");
	int **D = create_two_dim_int(170, 590, "random");
	int **A = create_two_dim_int(260, 790, "random");
	int **B = create_two_dim_int(420, 590, "random");

	for (int c = 2; c < 486; c++)
	  for (int b = 3; b < 166; b++)
	    for (int a = 4; a < 170; a++)
	    {
	      
	      B[a][b]=B[a+1][b+3]+E[a][b][c]-A[a][b]/C[a][b];
	      
	      D[a][b]=D[a][b+1]+B[a][b]-E[a][b][c]*C[a][b];
	      
	      B[a][b]=25;
	      
	      E[a][b][c]=37;
	      E[a+2][b+4][c+4]=15;
	      
	      E[a][b][c]=30;
	      
	      C[a][b]=E[a][b][c]*D[a][b]+D[a][b]-A[a][b];
	      A[a][b]=E[a-4][b-3][c-2]/B[a][b]+D[a][b]*A[a][b]-C[a][b];
	      
	      D[a][b]=B[a][b]*E[a][b][c]/D[a][b];
	      B[a][b]=B[a+2][b+2]*D[a][b]+E[a][b][c]/A[a][b]-C[a][b];
	    }

    return 0;
}