#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(860, 730, "random");
	int ***C = create_three_dim_int(400, 80, 260, "random");
	int ***B = create_three_dim_int(980, 450, 120, "random");
	int **E = create_two_dim_int(710, 530, "random");
	int *D = create_one_dim_int(580, "random");

	for (int c = 5; c < 120; c++)
	  for (int b = 3; b < 75; b++)
	    for (int a = 5; a < 398; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-2][c]-D[a]*A[a][b]/E[a][b];
	      
	      D[a]=D[a+3]-10;
	      
	      C[a][b][c]=C[a+2][b+5][c+4]-24;
	      
	      E[a][b]=35;
	      E[a+3][b+5]=C[a][b][c]+C[a][b][c]*B[a][b][c];
	      
	      A[a][b]=40;
	      A[a-2][b-2]=20;
	      
	      E[a][b]=D[a]+B[a][b][c]/C[a][b][c];
	      
	      B[a][b][c]=B[a][b][c]/C[a][b][c]*D[a]-E[a][b];
	      A[a][b]=B[a-2][b-3][c-5]-C[a][b][c]*A[a][b]+D[a];
	    }

    return 0;
}