#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(760, 950, 30, "zeros");
	int *A = create_one_dim_int(900, "zeros");
	int ***C = create_three_dim_int(140, 900, 690, "zeros");
	int ***B = create_three_dim_int(620, 840, 120, "zeros");
	int *D = create_one_dim_int(730, "zeros");

	for (int c = 2; c < 27; c++)
	  for (int b = 5; b < 900; b++)
	    for (int a = 4; a < 140; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-4][c-2]-31+D[a]*A[a]/E[a][b][c];
	      
	      D[a]=D[a-1]/C[a][b][c]*E[a][b][c]+10;
	      
	      C[a][b][c]=C[a-4][b-5][c-2]+E[a][b][c]*B[a][b][c]-D[a]/A[a];
	      
	      D[a]=B[a][b][c]*C[a][b][c]-A[a]/E[a][b][c];
	      
	      E[a][b][c]=E[a+2][b+2][c+3]+15;
	    }

    return 0;
}