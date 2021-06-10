#include <iostream>
using namespace std;

int main(){

    string item1;
    string item2;
    double price1; //first item price
    double price2; // second item price
    int quantity1; // first item quantity
    int quantity2; // second item quantity
    int quantity3; // sum of quantity
    double total1; // price of first one
    double total2; // price of second one
    double total3; // sum of total1 and total2
    bool one  = true; 
    bool zero = false;

    cout << "what item do you want you buy? ";
    getline (cin, item1);

    cout << "You have another item or not? ";
    cin >> one , zero;

    if (one == true ){
        cout << "enter your next item: " ;
          cin >> item2;

        cout << item2 << " Price"  << " ? $" ;
            cin >> price2;

        cout << "how many do you want to buy " << item2 +" " +"?: ";
            cin >> quantity2;

    }else if (zero == false){
        cout << "ok ";
    }else{
        cout << "ok";
    }

    cout << item1 << " price? $";
    cin >> price1;

    cout << "how many do you want to buy " << item1 +" "+ "?: ";
    cin >> quantity1;

    total1= price1 * quantity1 ;
    total2 = price2 * quantity2;
    total3 = total1 + total2;
    quantity3 = quantity2 + quantity1;
    
    

    cout << "item : " << item1 +" & "+  item2<<endl;
    cout << "price of " << item1 << " : $" << price1 << endl;
    cout << "price of " << item2 << " : $ " << price2 <<endl;
    cout << "x " << quantity3<< endl;
    cout << "your total is: $" << total3 << endl;


    return 0;
}
