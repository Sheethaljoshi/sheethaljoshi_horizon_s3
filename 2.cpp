#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, i, j;
    float input[50][50];
    float x = 0.0;
    float y = 0.0;
    cout<<"Enter the number of changes in motion";
    cin>>n;
    for(i=0;i<n;i++){
        
        cout<<"Enter velocity, direction (in degrees), and time in seconds for the change of motion - " << "("<<i+1<<")";
   
        for(j=0;j<3;j++){
            cin>>input[i][j];
        }
        float velocity = input[i][0];
        float direction= input[i][1];
        float time = input[i][2];

        
        
    }
}