#include<iostream>

using namespace std;

int main(void)
{
    //n cubes
    //pyramid top = 1 cube
    //Arithmethic progression on each level
    //input = 1<= n <= pow(10,4)
    int level = 0;
    int rowCubes = 0;
    int pyramidCubes = 0;
    int cubes;
    cin >> cubes;
    while(pyramidCubes < cubes)
    {
        level++;
        rowCubes += level;
        pyramidCubes += rowCubes;
    }
    if(pyramidCubes > cubes)
    {
        pyramidCubes -= rowCubes;
        rowCubes -= level;
        level--;
    }
    cout << level << endl;
}