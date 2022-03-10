#include <iostream>
using namespace std;




int main(){
    int counter = 0;
    int num = 0; 
    cout << "Enter the first number of the sequence: " << endl;
    cin >> num;
    

    while (counter < 3) {

        if (num == 1){
            counter++;
        }
        cout << num << " " ;
        if (num % 2 == 0){
            num = num / 2;
        }
        else {
            num = (3 * num) + 1;
            
        }
        
}
cout << "...";
return 0;

}
