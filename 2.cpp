#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, i, j;
    float dx, dy, direction;
    float input[50][50];
    float x = 0.0;
    float y = 0.0;

    // Prompts the user to enter the number of changes in motion
    cout<<"Enter the number of changes in motion: ";
    cin>>n;
    for(i=0;i<n;i++){
        
        // Iterates through each change in motion to input values of velocity, direction and time
        cout<<"Enter velocity, direction (in degrees), and time in seconds for the change of motion - " << "("<<i+1<<") ";
   
        for(j=0;j<3;j++){

            // Reads input values into the 2D array
            cin>>input[i][j];
        }

        // Converts direction from degrees to radians
        direction = (input[i][1] * M_PI)/180;

        // Calculates the displacement in x using formula =>  displacement (along x axis) = velocity * cos(theta) * time
        dx = input[i][0] * cos(direction) * input[i][2];
        // Calculates the displacement in x using formula =>  displacement (along y axis) = velocity * sin(theta) * time
        dy = input[i][0] * sin(direction) * input[i][2];

        // Updates the final position by adding the displacement over each iteration
        x += dx;
        y += dy;
        
    }
    // Displays the input array
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

    // Display the final position and output array
    cout << "Output: (" << x << ", " << y << ")\n";

    return 0;
}