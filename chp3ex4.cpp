#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::endl; using std::string;

int main() {

    cout << "Enter all words followed by EOF: " << endl;

    string max = "";
    string min = "";

    string word;
    while (cin >> word) {
        // �ʱ�ȭ
        if (min.size() == 0) min = word;
        if (max.size() == 0) max = word;

        // ũ�� Ȯ��
        if (word.size() < min.size()) min = word;
        else if (word.size() > max.size()) max = word;

    }

    // ����� ���
    cout << "Max: " << max << endl
        << "Min: " << min;

    return 0;
}

   


