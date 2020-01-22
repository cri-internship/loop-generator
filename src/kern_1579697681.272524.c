#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(920, 100, "random");
	int ***A = create_three_dim_int(990, 700, 890, "random");
	int ***C = create_three_dim_int(500, 840, 630, "random");
	int **B = create_two_dim_int(1000, 640, "random");
	int *D = create_one_dim_int(530, "random");

	for (int c = 4; c < 96; c++)
	  for (int b = 5; b < 527; b++)
	    for (int a = 5; a < 527; a++)
	    {
	      
	      E[a][b]=E[a-2][b-1]-D[a]+C[a][b][c]*A[a][b][c]/B[a][b];
	      
	      E[a][b]=E[a-1][b-1]/B[a][b]*A[a][b][c]-C[a][b][c]+D[a];
	      
	      D[a]=D[a+3]+E[a][b];
	      
	      int var_a=E[a][b]-30;
	      int var_b=E[a+2][b+4]+42;
	      
	      A[a][b][c]=D[a]+A[a][b][c]-B[a][b]*C[a][b][c];
	      E[a][b]=D[a-5]+20-A[a][b][c]*E[a][b]/B[a][b];
	      
	      B[a][b]=E[a][b]*B[a][b]-C[a][b][c];
	      D[a]=E[a-3][b-4]*A[a][b][c]-B[a][b]+C[a][b][c];
	      
	      int var_c=D[a]*3;
	      int var_d=D[a-2]-46;
	    }

    return 0;
}