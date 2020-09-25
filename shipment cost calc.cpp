#include <iostream>
int main(){

    using namespace std;

    int dimension{},length{}, breadth{}, height{};

    const float base_cost{2.50};
    cout << "Enter the dimensions in inches" << endl;
    cout << "Dimensions must be 10 inches or less" << endl;

    cout << "Enter Length : ";
    cin >> length;
    cout << "Enter Breadth : ";
    cin >> breadth;
    cout << "Enter Height : ";
    cin >> height;
    
    if(length > 10 || height > 10 || breadth > 10){
        cout << "We cannot ship it" << endl;
        cout << "Please try again" << endl;

    }
    else{
        cout << "We are happy to help you !!"<< endl;

    int Volume(length*breadth*height);
    double total_cost{};

    if(Volume > 100 && Volume <= 200){

        total_cost =  (base_cost +(base_cost * 0.1));
    }

    else if(Volume > 200)
        total_cost = (base_cost +(base_cost *0.25));

    
    cout << "You have to pay " << total_cost << " after the shipment." <<endl;
    }
    return 0;
}