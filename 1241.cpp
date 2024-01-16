#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, sizeA, sizeB, tmp;
    string a, b;
    bool check;
    scanf("%i", &n);
    // This line declares the variables `n`, `sizeA`, `sizeB`, `tmp`, `a`, `b`, and `check`.
    // The variable `n` stores the number of test cases.
    // The variables `sizeA` and `sizeB` store the lengths of the strings `a` and `b`.
    // The variable `tmp` stores the difference between the lengths of `a` and `b`.
    // The variable `a` stores the first string.
    // The variable `b` stores the second string.
    // The variable `check` stores a boolean value that indicates whether or not the strings `a` and `b` fit together.

    for (int i = 0; i < n; ++i){
        check = true;
        cin >> a >> b;
        sizeA = a.length(); sizeB = b.length();
        char arrayA[sizeA + 1]; char arrayB[sizeB + 1];
        // This line starts a for loop that will run `n` times.
        // The variable `i` stores the current iteration of the loop.

        if(sizeA < sizeB){
            puts("nao encaixa");
            continue;
        }
        // This line checks if the length of `a` is less than the length of `b`.
        // If it is, the function prints the string "nao encaixa" and continues to the next iteration of the loop.

        for (int i = 0; i < sizeA; ++i)
            arrayA[i] = a.at(i);          
        // This line iterates through the string `a` and stores each character in the array `arrayA`.

        for (int i = 0; i < sizeB; ++i)
            arrayB[i] = b.at(i);
        // This line iterates through the string `b` and stores each character in the array `arrayB`.

        tmp = sizeA - sizeB;
        // This line stores the difference between the lengths of `a` and `b` in the variable `tmp`.

        for (int i = 0; tmp < sizeA; ++tmp, ++i)
        {
            if(arrayA[tmp] != arrayB[i]){
                check = false;
                break;
            }
        }
        // This line iterates through the arrays `arrayA` and `arrayB` and compares each character.
        // If any of the characters are not equal, the variable `check` is set to false.


        if(check == true){
            puts("encaixa");
        }else{
            puts("nao encaixa");
        }
        // This line checks if the variable `check` is true.
        // If it is, the function prints the string "encaixa".
        // Otherwise, the function prints the string "nao encaixa".
    }

    return 0;
}