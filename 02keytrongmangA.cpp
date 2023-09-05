#include <iostream>

using namespace std;

void inputArray(int B[], int m) {
    cout << "Nhap " << m << " phan tu cua mang A:" << endl;
    for (int i = 0; i < m; i++) {
        cout << "A[" << i << "]: ";
        cin >> B[i];
    }
}

int demsopt(const int A[], int K, int key) {
    int count = 0;
    for (int i = 0; i < K; i++) {
        if (A[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int K;

    cout << "Nhap so phan tu: ";
    cin >> K;

    int A[100];
    inputArray(A, K);

    int key;
    cout << "Nhap Key: ";
    cin >> key;

    int sopt = demsopt(A, K, key);

    cout << "Co " << sopt << " so: " << key << endl;

    return 0;
}
