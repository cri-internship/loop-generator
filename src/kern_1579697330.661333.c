#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(640, 930, 670, "random");
	int *E = create_one_dim_int(330, "random");
	int **A = create_two_dim_int(840, 250, "random");
	int ***B = create_three_dim_int(440, 320, 660, "random");
	int ***D = create_three_dim_int(980, 950, 600, "random");

	for (int c = 0; c < 658; c++)
	  for (int b = 1; b < 250; b++)
	    for (int a = 5; a < 328; a++)
	    {
	      
	      A[a][b]=A[a-5][b-1]-30;
	      
	      B[a][b][c]=B[a+4][b+3][c+2]+D[a][b][c]*C[a][b][c]-19;
	      
	      C[a][b][c]=C[a+4][b+2][c+4]*E[a]-B[a][b][c]+D[a][b][c];
	      
	      E[a]=46;
	      E[a+2]=C[a][b][c]-A[a][b]*B[a][b][c];
	      
	      B[a][b][c]=38;
	    }

    return 0;
}