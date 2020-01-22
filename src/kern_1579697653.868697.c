#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(760, "random");
	int **C = create_two_dim_int(270, 680, "random");
	int ***B = create_three_dim_int(620, 500, 150, "random");
	int ***D = create_three_dim_int(170, 970, 350, "random");
	int **E = create_two_dim_int(820, 70, "random");

	for (int c = 3; c < 150; c++)
	  for (int b = 5; b < 65; b++)
	    for (int a = 5; a < 270; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-3][c-3]*7;
	      
	      E[a][b]=E[a-2][b-5]-35;
	      
	      E[a][b]=E[a+5][b+5]+30;
	      
	      A[a]=A[a+2]*28;
	      
	      C[a][b]=B[a][b][c]-E[a][b];
	      C[a-5][b-5]=D[a][b][c]-A[a]/D[a][b][c];
	    }

    return 0;
}