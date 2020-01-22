#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(370, 540, "random");
	int ***B = create_three_dim_int(500, 210, 980, "random");
	int *A = create_one_dim_int(400, "random");
	int **C = create_two_dim_int(950, 200, "random");
	int **D = create_two_dim_int(240, 970, "random");

	for (int b = 5; b < 195; b++)
	  for (int a = 5; a < 239; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-5][a-3]*E[a][b]-D[a][b]/C[a][b];
	    
	     int var_a=A[a]*46;
	     A[a]=7;
	    
	     A[a]=A[a+2]-49;
	    
	     C[a][b]=C[a+2][b+5]/37;
	    
	     int var_b=E[a][b]+17;
	     int var_c=E[a+4][b]*18;
	    
	     int var_d=D[a][b]/28;
	     int var_e=D[a+1][b]*39;
	    
	     int var_f=B[a][b][a]*45;
	     int var_g=B[a-2][b-3][a-2]*22;
	  }

    return 0;
}