#include <iostream>
using namespace std;

class sortDataClass {

private:

    int* data;
    int dSize, maxNum;

public:
    void randomize() {
        for (int i = 0; i < dSize; i++)
            data[i] = rand() % maxNum;
    }

    sortDataClass(int s, string dataset, int m) {
        dSize = s;
        maxNum = m;

        data = new int[dSize];
        if (dataset == "inorder")
            for (int i = 0; i < dSize; i++) data[i] = i;
        else if (dataset == "reverseorder")
            for (int i = 0; i < dSize; i++) data[i] = maxNum - i - 1;
        else if (dataset == "random")
            randomize();
        else
            cout << "Error";
    }

    void printData() {
        for (int i = 0; i < dSize; i++)
            cout << data[i] << endl;
    }
};

int main() {
    int dSize = 100;
    int maxNum = 150;

    cout << "In-order data set." << endl;
    sortDataClass inorder(dSize, "inorder", maxNum);
    inorder.printData();
    cout << endl << endl << endl << endl;

    cout << "Reverse-order data set." << endl;
    sortDataClass reverse(dSize, "reverseorder", maxNum);
    reverse.printData();
    cout << endl << endl << endl << endl;

    cout << "Random order data set." << endl;
    sortDataClass random(dSize, "random", maxNum);
    random.printData();
    return 0;
}
