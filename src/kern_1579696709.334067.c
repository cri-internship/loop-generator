#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(220, 290, 550, "random");
	int *A = create_one_dim_int(680, "random");
	int ***D = create_three_dim_int(690, 90, 610, "random");
	int *E = create_one_dim_int(20, "random");
	int ***C = create_three_dim_int(420, 80, 470, "random");

	for (int c = 5; c < 468; c++)
	  for (int b = 0; b < 75; b++)
	    for (int a = 4; a < 18; a++)
	    {
	      
	      D[a][b][c]=D[a][b+2][c+1]+C[a][b][c]/B[a][b][c]*A[a]-E[a];
	      
	      E[a]=D[a][b][c]*C[a][b][c]/B[a][b][c]+A[a];
	      E[a+2]=B[a][b][c];
	      
	      C[a][b][c]=43;
	      C[a-4][b][c-5]=35;
	      
	      D[a][b][c]=C[a][b][c]/B[a][b][c]*E[a]-4;
	      B[a][b][c]=C[a+4][b+5][c+2]+E[a]*B[a][b][c]-A[a]/D[a][b][c];
	    }

    return 0;
}