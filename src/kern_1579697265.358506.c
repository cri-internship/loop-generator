#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(690, 50, "random");
	int **D = create_two_dim_int(800, 480, "random");
	int *A = create_one_dim_int(630, "random");
	int *E = create_one_dim_int(330, "random");
	int ***B = create_three_dim_int(200, 760, 80, "random");

	for (int c = 0; c < 79; c++)
	  for (int b = 0; b < 46; b++)
	    for (int a = 0; a < 198; a++)
	    {
	      
	      B[a][b][c]=B[a+2][b][c+1]/25-A[a]+E[a];
	      
	      C[a][b]=C[a+2][b+4]+B[a][b][c]*E[a];
	      
	      C[a][b]=C[a+3][b+4]/1;
	      
	      E[a]=E[a+3]*C[a][b]/C[a][b]-D[a][b];
	      
	      E[a]=B[a][b][c]*A[a];
	      
	      B[a][b][c]=E[a]-C[a][b]/A[a]*6+D[a][b];
	      D[a][b]=E[a+1]*C[a][b]+B[a][b][c]/D[a][b]-A[a];
	    }

    return 0;
}