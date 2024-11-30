#include <iostream>
using namespace std;

// 交换函数，用于交换两个元素的值
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 冒泡排序函数，对数组进行从小到大排序
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
    cout << "请输入数组元素个数: ";
    cin >> size;
    // 使用new创建动态数组
    int* arr = new int[size];
    cout << "请依次输入 " << size << " 个整数元素: " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    // 调用冒泡排序函数对数组进行排序
    bubbleSort(arr, size);
    // 使用指针方式输出数组元素
    cout << "排序后的数组元素为: ";
    for (int* ptr = arr; ptr < arr + size; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;
    // 释放动态数组内存
    delete[] arr;
    return 0;
}