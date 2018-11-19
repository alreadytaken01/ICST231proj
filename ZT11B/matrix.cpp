/*
addmatrix.in
2 sets read from file (rows and columns)
read the first a[r][c]
read the second b[r][c]
for loop
add the 2 sets
matrixadder(a,b,c)
matrixsubtractker(a,b,c)
c[r][c] = a[r][c]+b[r][c]
display

*/
#inlcude <iostream>
#inlcude <fstream>
using namespace std;

int main()
{
	 fstream infile;  
	 ofstream outfile;

		infile.open("DESPUIG_E8.in");
		if (infile.fail())
		{
		    cout << "Input file opening failed\n";
		    exit(1); 
		}

	int i,j, matrix1[4][4], matrix2[4][4], matrixsum[4][4];

	infile >> matrix1 >> matrix2;

	for (int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						cout << matrix1[i][j]<< "\t"; 
					}
				cout << endl;
				}

	for (int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						cout << matrix2[i][j]<< "\t"; 
					}
				cout << endl;
				}

	matrixadder(matrix1, matrix2, matrixsum)
	{
		matrixsum[i][j] =matrix1[i][j] + matrix2[i][j]; 
		return matrixsum[i][j];
	}
	
	matrixsubtracker(matrix1,matrix2, matrixdiff)
	{
		matrixdiff[i][j] =matrix1[i][j]- matrix2[i][j];
		return matrixdiff[i][j];
	}

	cout << matrixsum[i][j] << "\t" << matrixdiff[i][j]<< "\t";

	 outfile.open("DESPUIG_E8.out"); 

	outfile << matrix2[i][j]<< "\t" << matrix2[i][j]<< "\t";
	outfile << matrixsum[i][j] << "\t" << matrixdiff[i][j]<< "\t";

 return 0
}

