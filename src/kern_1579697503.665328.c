#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(470, 940, 380, "random");
	int ***D = create_three_dim_int(280, 770, 520, "random");
	int **E = create_two_dim_int(240, 160, "random");
	int ***C = create_three_dim_int(720, 400, 360, "random");
	int **A = create_two_dim_int(430, 660, "random");

	for (int c = 0; c < 355; c++)
	  for (int b = 4; b < 160; b++)
	    for (int a = 4; a < 240; a++)
	    {
	      
	      C[a][b][c]=C[a+4][b][c+5]+15;
	      
	      E[a][b]=37;
	      E[a-1][b-4]=26;
	      
	      D[a][b][c]=E[a][b]/A[a][b];
	      B[a][b][c]=E[a-4][b-1]/D[a][b][c]*C[a][b][c]-B[a][b][c];
	    }

    return 0;
}