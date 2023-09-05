#include <iostream>

using namespace std;

// Hàm nhập mảng A có K phần tử với kiểm tra cấp phát
void inputArray(int*& A, int K) {
    A = new int[K]; // Cấp phát bộ nhớ động
    if (!A) {
        cout << "Lỗi cấp phát bộ nhớ." << endl;
        exit(1);
    }

    cout << "Nhập " << K << " phần tử của mảng A:" << endl;
    for (int i = 0; i < K; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
}

// Hàm đếm số lần xuất hiện của key trong mảng
int countOccurrences(const int A[], int K, int key) {
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
    int* A = nullptr;

    cout << "Nhập số phần tử của mảng K: ";
    cin >> K;

    inputArray(A, K);

    int key;
    cout << "Nhập giá trị key cần tìm: ";
    cin >> key;

    int occurrences = countOccurrences(A, K, key);

    cout << "Số lần xuất hiện của key " << key << " trong mảng A là: " << occurrences << endl;

    // Giải phóng bộ nhớ sau khi sử dụng
    delete[] A;

    return 0;
}
