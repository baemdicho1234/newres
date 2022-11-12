#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void tich(int a[100][100],int b[100][100],int result[100][100],int n)
{
      for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
       {
        result[i][j]=0;
            for(int k=0;k<n;k++)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
       }
}
void arr1Dto2D (int a[][100], int n,string b)
{
    vector<string> input ;
    b.append(" ");
    int k=0;
    while (b.length()!=0)
    {
        if (b[k]==' ') {input.push_back(b.substr(0,k));b.erase(0,k+1);k=0;}
        else k++;
    }
    int arr1D[n*n];
    for(int i=0;i<n*n;i++)
    {
        arr1D[i]=stoi(input[i]);
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
        	a[i][j] = arr1D[k++];
		}
}
int calculateNoOfWaitingDays( string input7Str,  string input7Matrix[], int k)
{
    vector<string> N7Vij;
    input7Str.append(" ");
    int a=0;
    while (input7Str.length()!=0)
    {
        if (input7Str[a]==' ') {N7Vij.push_back(input7Str.substr(0,a));input7Str.erase(0,a+1);a=0;}
        else a++;
    }
    int N7,V,i,j;
    N7=stoi(N7Vij[0]);V=stoi(N7Vij[1]);i=stoi(N7Vij[2]);j=stoi(N7Vij[3]);
    
    return N7;
}
int main()
{
	int b[2][2];
    string a="11 1 2 3";
    arr1Dto2D(b,2,a);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
        	cout<<b[i][j]<<endl;
		}

    return 0;
}
