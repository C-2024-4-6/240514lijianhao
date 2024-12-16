#include <iostream>
using namespace std;

// �������������ڽ�������Ԫ�ص�ֵ
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ð������������������д�С��������
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int size;
    cout << "����������Ԫ�ظ���: ";
    cin >> size;
    // ʹ��new������̬����
    int* arr = new int[size];
    cout << "���������� " << size << " ������Ԫ��: " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    // ����ð���������������������
    bubbleSort(arr, size);
    // ʹ��ָ�뷽ʽ�������Ԫ��
    cout << "����������Ԫ��Ϊ: ";
    for (int* ptr = arr; ptr < arr + size; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;
    // �ͷŶ�̬�����ڴ�
    delete[] arr;
    return 0;
}