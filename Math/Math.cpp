#include <iostream>
#include "M.h"
#include <cmath>
using namespace std;

int main(){
    M diff,ez,medi,hard,ans;   
    int d,input_num;
    float input_num_deci;
    string input,start_stop;
    while (true) {
        cout << "Type 'Start' to start and 'Stop' to stop\n";
        cout << "--------------\n\n";
        cin >> start_stop;
        if (start_stop == "Start") {
            cout << "Enter difficulity(from 1 t 3).\n";
            cin >> d;
            cout << "!commend-add,sub,multi,div,Stop!\n\n";
            //LEVEL1
            if (diff.difficulity(d) == 1) {
                cout << "Now you have chosen the difficulty level 1." << "\n";
                cout << "Enter commend>>\n";
                cin >> input;
                if (input == "add") {
                    ez.easy_num();
                    cout << "Please add them\n";
                    cin >> input_num;
                    if (input_num == ans.ez_addition()) {
                        cout << "Wow! Nice job:)\n";
                    }
                    else {
                        cout << "Wrong answer, try again:(\n";
                    }
                }
                else if (input == "sub") {
                    ez.easy_num();
                    cout << "Please subtract the first value from second one.\n";
                    cin >> input_num;
                    if (input_num == ans.ez_sub()) {
                        cout << "Wow! Lesss gooo:)\n";
                    }
                    else {
                        cout << "Please try again:(\n";
                    }
                }
                else if (input == "multi") {
                    ez.easy_num();
                    cout << "Please multiply them.\n";
                    cin >> input_num;
                    if (input_num == ans.ez_multi()) {
                        cout << "Wow! Amazing:)\n";
                    }
                    else {
                        cout << "Please try again:(\n";
                    }
                }
                else if (input == "div") {
                    ez.easy_num();
                    cout << "Please divide the first one from second one them.\n";
                    cin >> input_num;
                    if (input_num == ans.ez_div()) {
                        cout << "Wow! Looking cool:)\n";
                    }
                    else {
                        cout << "Please try again:(\n";
                    }
                }
                else if (input == "Stop") {
                    cout << "You have stopped the program.\n";
                    break;
                }
                else {
                    cout << "There's no commend like that. Check your commend again.\n";
                }
            }
            //LEVEL2
            else if (diff.difficulity(d) == 2) {
                cout << "Now you have chosen the difficulty level 2." << "\n";
                cout << "Enter commend>>\n";
                cin >> input;
                if (input == "add") {
                    medi.medi_num();
                    cout << "Please add them\n";
                    cin >> input_num;
                    if (input_num == ans.medi_addition()) {
                        cout << "Wow! Nice job:)\n";
                    }
                    else {
                        cout << "Wrong answer, try again:(\n";
                    }
                }
                else if (input == "sub") {
                    medi.medi_num();
                    cout << "Please subtract by this formula.\n";
                    cout << "First value - second value - third value.\n";
                    cin >> input_num;
                    if (input_num == ans.medi_sub()) {
                        cout << "Wow! Lesss gooo:)\n";
                    }
                    else {
                        cout << "Please try again:(\n";
                    }
                }
                else if (input == "multi") {
                    medi.medi_num();
                    cout << "Please multiply them.\n";
                    cin >> input_num;
                    if (input_num == ans.medi_multi()) {
                        cout << "Wow! Amazing:)\n";
                    }
                    else {
                        cout << "Please try again:(\n";
                    }
                }
                else if (input == "div") {
                    medi.medi_num();
                    float input_deci, ans_deci;
                    cout << "Solve it by the following formula and the answer must be two decimals.\n";
                    cout << "__(First value * second value) / third value__\n";
                    cout << ans.medi_div() << "\n";
                    cin >> input_num_deci;
                    input_deci = log10(input_num_deci * 100);
                    ans_deci = log10(ans.medi_div() * 100);
                    if (input_num_deci == ans.medi_div() and input_deci <= ans_deci) {
                        cout << "Wow! Looking cool:)\n";
                    }
                    else {
                        cout << "Please try again:(\n";
                    }
                }
                else if (input == "Stop") {
                    cout << "You have stopped the program.\n";
                    break;
                }
                else {
                    cout << "There's no commend like that. Check your commend again.\n";

                }
            }
            //LEVEL3
            else if (diff.difficulity(d) == 3) {
                cout << "Now you have chosen the difficulty level 3." << "\n";
                cout << "Enter commend>>\n";
                cin >> input;
                if (input == "add") {
                    hard.hard_num();
                    cout << "Please add them\n";
                    cin >> input_num;
                    if (input_num == ans.hard_addition()) {
                        cout << "Wow! Nice job:)\n";
                    }
                    else {
                        cout << "Wrong answer, try again:(\n";
                    }
                }
                else if (input == "sub") {
                    hard.hard_num();
                    cout << "Please subtract by this formula.\n";
                    cout << "First value - second value - third value. - forth value.\n";
                    cin >> input_num;
                    if (input_num == ans.hard_sub()) {
                        cout << "Wow! Lesss gooo:)\n";
                    }
                    else {
                        cout << "Please try again:(\n";
                    }
                }
                else if (input == "multi") {
                    hard.hard_num();
                    cout << "Please multiply them.\n";
                    cin >> input_num;
                    if (input_num == ans.hard_multi()) {
                        cout << "Wow! Amazing:)\n";
                    }
                    else {
                        cout << "Please try again:(\n";
                    }
                }
                else if (input == "div") {
                    hard.hard_num();
                    float input_deci, ans_deci;
                    cout << "Solve it by the following formula and the answer must be two decimals.\n";
                    cout << "__(First value * second value) / third value__\n";
                    cout << ans.hard_div() << "\n";
                    cin >> input_num_deci;
                    input_deci = log10(input_num_deci * 100);
                    ans_deci = log10(ans.hard_div() * 100);
                    if (input_num_deci == ans.hard_div() and input_deci <= ans_deci) {
                        cout << "Wow! Looking cool:)\n";
                    }
                    else {
                        cout << "Please try again:(\n";
                    }
                }
                else if (input == "Stop") {
                    cout << "You have stopped the program.\n";
                    break;
                }
                else {
                    cout << "There's no commend like that. Check your commend again.\n";

                }
            }

        }   
        else if (start_stop == "Stop") {
            cout << "Program stops here.\n";
            break;
        }       
    } 
    cout << std::_Xoverflow_error;
}
        