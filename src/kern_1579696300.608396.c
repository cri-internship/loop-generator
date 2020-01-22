#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(480, "random");
	int ***B = create_three_dim_int(320, 60, 570, "random");
	int ***E = create_three_dim_int(250, 200, 750, "random");
	int ***C = create_three_dim_int(520, 1000, 130, "random");
	int *A = create_one_dim_int(920, "random");

	for (int c = 0; c < 128; c++)
	  for (int b = 0; b < 198; b++)
	    for (int a = 5; a < 247; a++)
	    {
	      
	      D[a]=D[a-2]+38;
	      
	      A[a]=A[a-5]-B[a][b][c]*D[a]+C[a][b][c]/E[a][b][c];
	      
	      C[a][b][c]=C[a+1][b+2][c+2]+50;
	      
	      int var_a=D[a]+22;
	      
	      int var_c=E[a][b][c]-4;
	      int var_d=E[a+3][b+2][c+1]*7;
	      
	      E[a][b][c]=A[a]/B[a][b][c]+E[a][b][c]*D[a]-C[a][b][c];
	      D[a]=A[a]+B[a][b][c]-E[a][b][c];
	    }

    return 0;
}