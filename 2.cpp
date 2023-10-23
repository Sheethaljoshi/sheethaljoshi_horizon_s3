#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, i, j;
    float dx, dy, direction;
    float input[50][50];
    float x = 0.0;
    float y = 0.0;
    cout<<"Enter the number of changes in motion: ";
    cin>>n;
    for(i=0;i<n;i++){
        
        cout<<"Enter velocity, direction (in degrees), and time in seconds for the change of motion - " << "("<<i+1<<")";
   
        for(j=0;j<3;j++){
            cin>>input[i][j];
        }

        direction = (input[i][1] * M_PI)/180;

        dx = input[i][0] * cos(direction) * input[i][2];
        dy = input[i][0] * sin(direction) * input[i][2];

        x += dx;
        y += dy;
        
    }
    cout << "Input:(";
    for(i=0;i<n;i++){
        cout<<"(";
        for(j=0;j<3;j++){
            cout<<input[i][j];
             if (j < 2) {
                cout << ", ";
            } else if (i < n - 1) {
                cout << "), ";
            } else {
                cout << ")";
        }
    }
}
    cout << ")\n";
    cout << "Output: (" << x << ", " << y << ")\n";

    return 0;
}