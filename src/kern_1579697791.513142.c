#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(850, 10, "zeros");
	int *B = create_one_dim_int(80, "zeros");
	int ***D = create_three_dim_int(460, 980, 490, "zeros");
	int ***A = create_three_dim_int(230, 620, 570, "zeros");
	int ***E = create_three_dim_int(310, 330, 530, "zeros");

	for (int b = 2; b < 328; b++)
	  for (int a = 5; a < 76; a++)
	  {
	    
	     E[a][b][a]=E[a-5][b-2][a-1]*A[a][b][a];
	    
	     B[a]=B[a+4]+1;
	    
	     A[a][b][a]=7;
	     A[a+1][b+5][a+2]=22;
	    
	     E[a][b][a]=31;
	    
	     C[a][b]=A[a][b][a]-D[a][b][a]+C[a][b];
	     D[a][b][a]=A[a+5][b][a+5]-B[a]*E[a][b][a]+C[a][b];
	  }

    return 0;
}