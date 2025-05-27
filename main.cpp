#include <iostream>

using namespace std;

int main()
{
    cout << "==================" << endl;
    cout << "WEIGHT CHECKER" << endl;
    cout << "==================" << endl;

    string salutation;
    cout << "Sir/ Ma: " << flush;
    cin >> salutation;

    int weight;

    if(salutation == "Sir" || salutation == "sir" || salutation == "Ma" || salutation == "ma"){
        cout << "YOUR WEIGHT " << salutation << ": " << flush;
        cin >> weight;
    }else{
        cout << "Program Continues" << endl;
    }

    string unit;
    cout << "Lbs or Kg: " << flush;
    cin >> unit;

    int result_kg = weight * 0.45;
    int result_lbs = weight / 0.45;

    if(unit == "Lbs" || unit == "lbs"){
        cout << "You are " << result_kg << " kg " << salutation << "." <<endl;
    }else if(unit == "Kg" || unit == "kg"){
        cout << "You are " << result_lbs << " pounds " << salutation << "." << endl;
    }else{
        cout << "Invalid Input. Please TRy again." << endl;
    }

    if(salutation == "Sir" || salutation == "sir"){
        if(result_kg <= 79.4 || result_lbs <= 175){
            cout << "The Weight is favourable" << endl;
        }else{
            cout << "The Weight is above average. Consult a Doctor." << endl;
        }
    }else if(salutation == "Ma" || salutation == "ma") {
        if(result_kg <= 66.7 || result_lbs <= 147){
            cout << "The Weight is favourable" << endl;
        }else{
            cout << "The Weight is above average. Consult a Doctor." << endl;
        }
    }else{
        cout << "Program Ends" << endl;
    }

    cout << "Program Ends" << endl;

    return 0;
}

